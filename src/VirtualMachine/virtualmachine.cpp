#include <iostream>
#include <cstring>
#include "virtualmachine.hpp"

VirtualMachine::VirtualMachine(const char* virtualMachineName, const char* virtualMachineImageOS,
                int virtualMachineStorage, int virtualMachineMemory): storage(virtualMachineStorage), memory(virtualMachineMemory){
    name = new char[strlen(virtualMachineName) + 1];
    strcpy(name, virtualMachineName);

    imageOS = new char[strlen(virtualMachineImageOS) + 1];
    strcpy(imageOS, virtualMachineImageOS);
}

VirtualMachine::VirtualMachine(): name(NULL), imageOS(NULL), storage(0), memory(0){}

VirtualMachine::VirtualMachine(const VirtualMachine& virtualMachine): storage(virtualMachine.storage), memory(virtualMachine.memory){
    name = new char[strlen(virtualMachine.name) + 1];
    strcpy(name, virtualMachine.name);

    imageOS = new char[strlen(virtualMachine.imageOS) + 1];
    strcpy(imageOS, virtualMachine.imageOS);
}

VirtualMachine::~VirtualMachine() {
    delete []name;
    delete []imageOS;
}

VirtualMachine& VirtualMachine::operator=(const VirtualMachine& other) {
    storage = other.storage;
    memory = other.memory;

    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);

    imageOS = new char[strlen(other.imageOS) + 1];
    strcpy(imageOS, other.imageOS);

    return *this;
}

char* VirtualMachine::getName(){
    char* newName;
    newName = new char[strlen(name) + 1];
    strcpy(newName, name);

    return newName;
}

char* VirtualMachine::getImageOS() {
    char* newImageOS;
    newImageOS = new char[strlen(imageOS) + 1];
    strcpy(newImageOS, imageOS);

    return newImageOS;
}

int VirtualMachine::getStorage() {
    return storage;
}

int VirtualMachine::getMemory() {
    return memory;
}

void VirtualMachine::setName(const char* newName) {
    name = new char[strlen(newName) + 1];
    strcpy(name, newName);
}

void VirtualMachine::setImageOS(const char* newImageOS) {
    imageOS = new char[strlen(newImageOS) + 1];
    strcpy(imageOS, newImageOS);
}

void VirtualMachine::setStorage(int newStorage) {
    storage = newStorage;
}

void VirtualMachine::setMemory(int newMemory) {
    memory = newMemory;
}

void VirtualMachine::start() {
    std::cout << "Virtual machine " << name << " started" << std::endl;
}

void VirtualMachine::printInfo() {
    std::cout << "Virtual machine name: " << name << " imageOS: " << imageOS << " storage(GB): " << storage << " memory(MB): " << memory << std::endl;
}