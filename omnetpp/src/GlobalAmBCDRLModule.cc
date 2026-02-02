#include "GlobalAmBCDRLModule.h"

Define_Module(GlobalAmBCDRLModule);

void GlobalAmBCDRLModule::initialize()
{
    enabled = par("enabled").boolValue();
    controlInterval = par("controlInterval");
    controlEvent = new cMessage("controlEvent");

    if (enabled)
        scheduleAt(simTime() + controlInterval, controlEvent);
}

void GlobalAmBCDRLModule::handleMessage(cMessage *msg)
{
    if (msg == controlEvent && enabled)
    {
        // Aqui ocorre a interação com o agente DRL externo
        EV << "[GlobalAmBC-DRL] Control step executed at " << simTime() << endl;

        scheduleAt(simTime() + controlInterval, controlEvent);
    }
}
