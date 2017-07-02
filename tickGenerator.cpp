//
// Created by njn on 17-7-2.
//
#include <cstring>
#include "tickGenerator.h"
tickGenerator::tickGenerator(threadsafe_stack<CShfeFtdcMBLMarketDataField> *gstack)
{

    setStack(gstack);
}
tickGenerator::~tickGenerator()
{


}

void tickGenerator::operator()()
{
    std::cout << "method two: thread start" << std::endl;
    CShfeFtdcMBLMarketDataField *myTicker=(CShfeFtdcMBLMarketDataField *)malloc(sizeof(CShfeFtdcMBLMarketDataField));

    strcpy(myTicker->InstrumentID, "testID");
    //myTicker->Direction = '0';
    myTicker->Direction = SHFE_FTDC_D_Sell;
    myTicker->Price = 999.99;
    myTicker->Volume = 100;
    mystack->push(*myTicker);
    myPromis.set_value("Tick Push Success!");
    while (true)
    {
        sleep(1);

        if(mystack == nullptr)
        {
            continue;

        }
        mystack->push(*myTicker);
        std::cout << "pushing " << std::endl;
        //myPromis.set_value("Tick Push Success!");
        myTicker->Volume += 1;
        myTicker->Price += 1.01;
        //std::cout << "method two: thread start" << std::endl;
    }
    std::cout << "method two: thread stop" << std::endl;
}

int tickGenerator::setStack(threadsafe_stack<CShfeFtdcMBLMarketDataField> *gstack)
{

    mystack = gstack;

    return 0;
}

std::future<std::string> tickGenerator::getPromisFuture()
{
    return myPromis.get_future();

}
