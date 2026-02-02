#ifndef __GLOBAL_AMBC_DRL_MODULE_H_
#define __GLOBAL_AMBC_DRL_MODULE_H_

#include <omnetpp.h>

using namespace omnetpp;

class GlobalAmBCDRLModule : public cSimpleModule
{
  protected:
    bool enabled;
    simtime_t controlInterval;
    cMessage *controlEvent;

    virtual void initialize() override;
    virtual void handleMessage(cMessage *msg) override;
};

#endif
