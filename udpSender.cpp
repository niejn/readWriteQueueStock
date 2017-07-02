//
// Created by njn on 17-7-2.
//

#include "udpSender.h"

#define BUFFER_SIZE 80

udpSender::udpSender(threadsafe_stack<CShfeFtdcMBLMarketDataField> *gstack)
{
    setStack(gstack);
    ttl = 30;
    one = 1;
    memset(&saddr, 0, sizeof(struct sockaddr_in));
    memset(&iaddr, 0, sizeof(struct in_addr));
// open a UDP socket
    sock = socket(PF_INET, SOCK_DGRAM, 0);
    if ( sock < 0 )
        perror("Error creating socket"), exit(0);
    saddr.sin_family = PF_INET;
    saddr.sin_port = htons(0); // Use the first free port
    saddr.sin_addr.s_addr = htonl(INADDR_ANY);// bind socket to any interface


    status = bind(sock, (struct sockaddr *)&saddr, sizeof(struct sockaddr_in));
    if ( status < 0 )
        perror("Error binding socket to interface"), exit(0);
    iaddr.s_addr = INADDR_ANY; // use DEFAULT interface
// Set the outgoing interface to DEFAULT
    setsockopt(sock, IPPROTO_IP, IP_MULTICAST_IF, &iaddr,
               sizeof(struct in_addr));
// Set multicast packet TTL to 3; default TTL is 1
    setsockopt(sock, IPPROTO_IP, IP_MULTICAST_TTL, &ttl,
               sizeof(unsigned char));
// send multicast traffic to myself too
    status = setsockopt(sock, IPPROTO_IP, IP_MULTICAST_LOOP,
                        &one, sizeof(unsigned char));
// set destination multicast address
    saddr.sin_family = PF_INET;
//    saddr.sin_addr.s_addr = inet_addr("226.0.0.1");
    saddr.sin_addr.s_addr = inet_addr("224.0.0.1");
    //234.2.2.2
    saddr.sin_port = htons(4096);
// put some data in buffer
    //char msg[] = "Hello world\n";
    strcpy(msg, "Hello world\n");
    strcpy(buffer, msg);
    socklen = sizeof(struct sockaddr_in);

}
udpSender::~udpSender()
{


}

int udpSender::sendMsg()
{
    status = sendto(sock, buffer, strlen(buffer), 0,
                    (struct sockaddr *)&saddr, socklen);
    printf("\nsendto Status = %d\n", status);
    printf(" \nsending [%d]bytes\n", sizeof(msg));
    printf("\nstr msg size is [%d]bytes\n", strlen(buffer));
    sleep(1);

}

int udpSender::sendMsg(CShfeFtdcMBLMarketDataField *pMBLMarketData)
{
    if(pMBLMarketData == nullptr)
    {
        return 1;

    }

    int needSend=sizeof(CShfeFtdcMBLMarketDataField);
    printf("\nneedSend = %d\n", needSend);
    char *buffer=(char*)malloc(needSend);
    memcpy(buffer,pMBLMarketData,needSend);
    int buffer_len = strlen(buffer);

//    status = sendto(sock, buffer, strlen(buffer), 0,
//                    (struct sockaddr *)&saddr, socklen);

    status = sendto(sock, buffer, BUFFER_SIZE, 0,
                    (struct sockaddr *)&saddr, socklen);
    printf("\nsendto Status = %d\n", status);
    printf(" \nsending [%d]bytes\n", needSend);
    printf("\nstr msg size is [%d]bytes\n", strlen(buffer));
    sleep(1);

}

void udpSender::operator()()
{
    std::cout << "udpSender: thread start" << std::endl;
    //CShfeFtdcMBLMarketDataField *myTicker=(CShfeFtdcMBLMarketDataField *)malloc(sizeof(CShfeFtdcMBLMarketDataField));
    CShfeFtdcMBLMarketDataField *myTicker;
//    strcpy(myTicker->InstrumentID, "testID");
//    //myTicker->Direction = '0';
//    myTicker->Direction = SHFE_FTDC_D_Sell;
//    myTicker->Price = 999.99;
//    myTicker->Volume = 100;




    while (true)
    {
        //sleep(1);
        if(mystack == nullptr)
        {
            continue;

        }
        mystack->pop(*myTicker);
        //sendMsg();
        sendMsg(myTicker);
//        myTicker->Volume += 1;
//        myTicker->Price += 1.01;

    }
    std::cout << "method two: thread stop" << std::endl;
}

int udpSender::setStack(threadsafe_stack<CShfeFtdcMBLMarketDataField> *gstack)
{

    mystack = gstack;

    return 0;
}