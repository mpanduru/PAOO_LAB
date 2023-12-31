#include <iostream>
#include <cstring>
#include "dockercontainer.hpp"
#include "image.hpp"

namespace VirtualNamespace {

DockerContainer::DockerContainer(Image containerImage, const char* containerTag, int containerSize, int containerData): Container(containerImage, containerTag, containerSize, containerData){
}

DockerContainer::DockerContainer(): Container(){}

void DockerContainer::deployToSwarm(const char* serviceName, int replicaCount){
    std::cout << "Deploying Docker container to Docker Swarm";
    this->printInfo();
    std::cout << "Container deployed: Service Name " << serviceName << " Replicas " << replicaCount << std::endl;
}

}