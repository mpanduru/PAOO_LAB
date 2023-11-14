#ifndef SYSTEM_HPP
#define SYSTEM_HPP

#include<vector>
#include<memory>
#include "virtualcomponent.hpp"

namespace VirtualNamespace {

class System {
private:
    std::vector<std::shared_ptr<VirtualComponent>> virtualComponents;

public:
    System(const std::vector<std::shared_ptr<VirtualComponent>>& initialComponents);

    System();

    ~System();

    void addComponent(std::shared_ptr<VirtualComponent> component);

    void startAllComponents();

    void printComponents();
};

}

#endif