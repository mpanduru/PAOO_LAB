#ifndef VIRTUALCOMPONENT_HPP
#define VIRTUALCOMPONENT_HPP

namespace VirtualNamespace {

class VirtualComponent {
public:
    virtual void start() = 0;

    virtual void printInfo() = 0;
};

}

#endif