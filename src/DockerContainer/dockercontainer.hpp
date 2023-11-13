#ifndef DOCKERCONTAINER_HPP
#define DOCKERCONTAINER_HPP

#include "image.hpp"
#include "container.hpp"

namespace VirtualNamespace {

class DockerContainer : public Container {
public:
    DockerContainer(Image containerImage, const char* containerTag, int containerSize);
    DockerContainer();
    void deployToSwarm(const char* serviceName, int replicaCount);
};

}

#endif