#include <iostream>
#include "container.hpp"
#include "image.hpp"

int main(int argc, char* argv[]) {
    Image ubuntuImage("Ubuntu", "ubuntu", 65);
    Image postgresImage("PostgreSQL", "postgres", 200);

    Container container1(ubuntuImage, "latest", 300);
    Container container2(postgresImage, "latest", 500);
    Container backupcontainer1 = container1;

    container1.printInfo();
    container2.printInfo();
    backupcontainer1.printInfo();
    std::cout << "Schimbare container1" << std::endl;
    container1.setImage(postgresImage);
    container1.printInfo();
    std::cout << "Revenire la backup" << std::endl;
    container1 = backupcontainer1;
    container1.printInfo();

    return 0;
}