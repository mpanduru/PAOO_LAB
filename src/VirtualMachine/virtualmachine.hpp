#ifndef VIRTUALMACHINE_HPP
#define VIRTUALMACHINE_HPP

#include "virtualcomponent.hpp"

namespace VirtualNamespace {

class VirtualMachine : public VirtualComponent {
private:
    char* name;
    char* imageOS;
    int storage;
    int memory;

public:
    VirtualMachine(const char* virtualMachineName, const char* virtualMachineImageOS, int virtualMachineStorage, int virtualMachineMemory);

    VirtualMachine();

    VirtualMachine(const VirtualMachine& virtualMachine);

    ~VirtualMachine();

    VirtualMachine& operator=(const VirtualMachine& other);

    char* getName();

    char* getImageOS();
    
    int getStorage();

    int getMemory();

    void setName(const char* newName);

    void setImageOS(const char* newImageOS);

    void setStorage(int newStorage);

    void setMemory(int newMemory);

    void start();

    void printInfo();

};

}

#endif