#include <iostream>
#include <memory>
#include "container.hpp"
#include "image.hpp"
#include "virtualmachine.hpp"
#include "dockercontainer.hpp"
#include "virtualcomponent.hpp"
#include "system.hpp"

using namespace VirtualNamespace;

int main(int argc, char* argv[]) {
    // std::cout << "Creare imagini.." << std::endl;
    // Image ubuntuImage("Ubuntu", "ubuntu", 65);
    // Image postgresImage("PostgreSQL", "postgres", 200);
    // std::cout << "2 Imagini create: " << std::endl;
    // ubuntuImage.printInfo();
    // postgresImage.printInfo();

    // std::cout << "Creare containere.." << std::endl;
    // Container container1(ubuntuImage, "latest", 300);
    // Container container2(postgresImage, "latest", 500);
    // Container backupcontainer1 = container1;
    // DockerContainer dockercontainer1(ubuntuImage, "docker", 100);
    // std::cout << "4 Containere create: " << std::endl;
    // container1.printInfo();
    // container2.printInfo();
    // backupcontainer1.printInfo();

    // std::cout << "Creare vm.." << std::endl;
    // VirtualMachine vm1("vm1", "windows", 50, 8192);
    // std::cout << "Un VM creat: " << std::endl;
    // vm1.printInfo();

    // std::cout << "Pornire container1.." << std::endl;
    // container1.start();
    // std::cout << "Pornire container2.." << std::endl;
    // container2.start();
    // std::cout << "Schimbare container1" << std::endl;
    // container1.setImage(postgresImage);
    // container1.printInfo();
    // std::cout << "Revenire la backup container1" << std::endl;
    // container1 = backupcontainer1;
    // container1.printInfo();

    // std::cout << "Deploy docker container to Swarm" << std::endl;
    // dockercontainer1.deployToSwarm("service1", 5);

    // std::cout << "Move example" << std::endl;
    // DockerContainer dockercontainer2(std::move(dockercontainer1));
    // dockercontainer2.printInfo();

    std::shared_ptr<VirtualMachine> vm1 = std::make_shared<VirtualMachine>("vm1", "windows", 50, 8192);
    std::shared_ptr<VirtualMachine> vm2 = std::make_shared<VirtualMachine>("vm2", "ubuntu", 40, 4096);
    std::shared_ptr<VirtualMachine> vm3 = std::make_shared<VirtualMachine>("vm3", "centos", 45, 4096);
    
    std::unique_ptr<System> mySystem = std::make_unique<System>();
    mySystem->addComponent(vm1);
    mySystem->addComponent(vm2);

    mySystem->startAllComponents();
    mySystem->printComponents();

    std::unique_ptr<System> backupSystem;
    backupSystem = move(mySystem);
    backupSystem->addComponent(vm3);
    backupSystem->printComponents();

    std::unique_ptr<System> remoteSystem = std::make_unique<System>();
    remoteSystem->addComponent(vm1);
    remoteSystem->printComponents();

    std::cout << "Template examples" << std::endl;
    Image ubuntuImage("Ubuntu", "ubuntu", 65);
    int intData = 42;
    double doubleData = 3.14;
    
    ubuntuImage.processData(intData);
    ubuntuImage.processData(doubleData);

    Container<double> container1(ubuntuImage, "latest", 300, doubleData);
    std::cout << container1.getContainerData() << std::endl;
    return 0;
}