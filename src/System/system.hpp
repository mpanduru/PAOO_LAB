#ifndef SYSTEM_HPP
#define SYSTEM_HPP

#include<vector>
#include "virtualcomponent.hpp"

namespace VirtualNamespace {

class System {
private:
    std::vector<VirtualComponent*> virtualComponents;

public:
    System(const std::vector<VirtualComponent*>& initialComponents);

    System();

    ~System();

    void addComponent(VirtualComponent* component);

    void startAllComponents();

    void printComponents();
};

}

#endif