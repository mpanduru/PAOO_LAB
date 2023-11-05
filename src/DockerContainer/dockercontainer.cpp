#include <iostream>
#include <cstring>
#include "dockercontainer.hpp"
#include "image.hpp"

DockerContainer::DockerContainer(Image containerImage, const char* containerTag, int containerSize): Container(containerImage, containerTag, containerSize){
}

DockerContainer::DockerContainer(): Container(){}

void DockerContainer::deployToSwarm(const char* serviceName, int replicaCount){
    std::cout << "Deploying Docker container to Docker Swarm";
    this->printInfo();
    std::cout << "Container deployed: Service Name " << serviceName << " Replicas " << replicaCount << std::endl;
}