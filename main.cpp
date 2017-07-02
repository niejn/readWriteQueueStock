#include <iostream>
#include <unistd.h>

#include "udpSender.h"
#include <thread>
#include <future>
#include "threadsafeStack.h"
#include "tickGenerator.h"
threadsafe_stack<CShfeFtdcMBLMarketDataField> *gstack = new threadsafe_stack<CShfeFtdcMBLMarketDataField>();
//class runTdReqData
//{
//private:
//    int num = 0;
//public:
//    //SHFEApi *mySHFE;
//    runTdReqData(int in_num)
//    {
//        num = in_num;
//
//    }
//    ~runTdReqData()
//    {
//
//
//    }
//
//    void operator()()
//    {
//        std::cout << "method two: thread start" << std::endl;
//        while (true)
//        {
//            sleep(1);
//            std::cout << "method two: num is " << num << std::endl;
//            //std::cout << "method two: thread start" << std::endl;
//        }
//        std::cout << "method two: thread stop" << std::endl;
//    }
//};
int main() {
    std::cout << "Hello, World!" << std::endl;
//    runTdReqData r(1);
//    std::thread TdReqThread(std::ref(r));
//    TdReqThread.join();

    //threadsafe_stack *mystack = new threadsafe_stack();
    tickGenerator myTickGen(gstack);
    std::thread tickGenThread(std::ref(myTickGen));


    udpSender mySender(gstack);
    std::future<std::string> TickGenFin = myTickGen.getPromisFuture();
    std::cout <<TickGenFin.get() << std::endl;
    std::thread udpThread(std::ref(mySender));


    tickGenThread.join();
    udpThread.join();
    return 0;
}