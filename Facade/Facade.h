#pragma once

#include "SubsystemA.h"
#include "SubsystemB.h"
#include "SubsystemC.h"

class Facade {
private:
    SubsystemA subsystemA;
    SubsystemB subsystemB;
    SubsystemC subsystemC;

public:
    void operation() const {
        std::cout << "Facade operation:" << std::endl;
        subsystemA.operationA();
        subsystemB.operationB();
        subsystemC.operationC();
    }
};
