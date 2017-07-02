//
// Created by njn on 17-7-2.
//

#ifndef READWRITEQUEUESTOCK_UDPSENDER_H
#define READWRITEQUEUESTOCK_UDPSENDER_H
#include <iostream>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>
#include <cstring>


#include <arpa/inet.h>
#include <unistd.h>

#include "./include/FtdcUserApiStruct.h"
#include "./include/FtdcUserApiDataType.h"
#include "threadsafeStack.h"

#define MAXBUFSIZE 65536 // Max UDP Packet size is 64 Kbyte
class udpSender
{
public:
    udpSender(threadsafe_stack<CShfeFtdcMBLMarketDataField> *gstack);
    ~udpSender();
    int setStack(threadsafe_stack<CShfeFtdcMBLMarketDataField> *gstack);
    int sendMsg();
    int sendMsg(CShfeFtdcMBLMarketDataField *pMBLMarketData);
    void operator()();

private:

    int sock, status, socklen;
    char buffer[MAXBUFSIZE];
    struct sockaddr_in saddr;
    struct in_addr iaddr;
    unsigned char ttl;
    unsigned char one;
    char msg[MAXBUFSIZE];
    threadsafe_stack<CShfeFtdcMBLMarketDataField> *mystack;
};






#endif //READWRITEQUEUESTOCK_UDPSENDER_H
