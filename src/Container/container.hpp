#ifndef CONTAINER_HPP
#define CONTAINER_HPP

#include "image.hpp"
#include "virtualcomponent.hpp"

namespace VirtualNamespace {

template <typename T> 
class Container : public VirtualComponent {
private:
    Image image;
    char* tag;
    int size;
    T containerData;

public:
    Container(Image containerImage, const char* containerTag, int containerSize, T containerData);

    Container();

    Container(const Container& container);

    ~Container();

    Container& operator=(const Container& other);

    Container(Container&& container);

    Image getImage();

    char* getTag();

    int getSize();

    T getContainerData();
    
    void setContainerData(T data);

    void setImage(Image containerImage);

    void setTag(const char* containerTag);

    void setSize(int containerSize);

    void start();

    void printInfo();

};

}

#endif