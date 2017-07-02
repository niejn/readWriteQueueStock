//
// Created by njn on 17-7-2.
//

#ifndef READWRITEQUEUESTOCK_TICKGENERATOR_H
#define READWRITEQUEUESTOCK_TICKGENERATOR_H
#include <iostream>
#include <unistd.h>

#include <thread>
#include <future>
#include "threadsafeStack.h"
#include "./include/FtdcUserApiStruct.h"
#include "./include/FtdcUserApiDataType.h"
class tickGenerator
{
public:
    tickGenerator(threadsafe_stack<CShfeFtdcMBLMarketDataField> *gstack);
    ~tickGenerator();
    void operator()();
    int setStack(threadsafe_stack<CShfeFtdcMBLMarketDataField> *gstack);
    std::future<std::string> getPromisFuture();
    //return myPromis.get_future();

private:
    threadsafe_stack<CShfeFtdcMBLMarketDataField> *mystack;
    std::promise<std::string> myPromis;


};
#endif //READWRITEQUEUESTOCK_TICKGENERATOR_H
