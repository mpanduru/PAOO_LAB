#include <iostream>
#include <vector>
#include "system.hpp"

namespace VirtualNamespace {

System::System(const std::vector<VirtualComponent*>& initialComponents): virtualComponents(initialComponents){}

System::System() {}

System::~System(){
    virtualComponents.clear();
}

void System::addComponent(VirtualComponent* component){
    virtualComponents.push_back(component);
}

void System::startAllComponents(){
    for (auto component : virtualComponents) {
        component->start();
    }
}

void System::printComponents(){
    for (auto component : virtualComponents) {
        component->printInfo();
    }
}
}