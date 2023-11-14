#ifndef DOCKERCONTAINER_HPP
#define DOCKERCONTAINER_HPP

#include "image.hpp"
#include "container.hpp"

namespace VirtualNamespace {

class DockerContainer : public Container<int> {
public:
    DockerContainer(Image containerImage, const char* containerTag, int containerSize, int containerData);
    DockerContainer();
    void deployToSwarm(const char* serviceName, int replicaCount);
};

}

#endif