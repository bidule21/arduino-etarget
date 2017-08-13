#ifndef TARGETINDICATOR_ACTIONBROKER_H
#define TARGETINDICATOR_ACTIONBROKER_H

#include "CommunicatorAction.h"

class ActionBroker {
public:
    static CommunicatorAction* getActionByName(int command);
protected:
    static const int ACTIONS = 10;
    static const CommunicatorAction* actions[];
};

#endif //TARGETINDICATOR_ACTIONBROKER_H