#ifndef CONTAINER_HPP
#define CONTAINER_HPP

#include "image.hpp"
#include "virtualcomponent.hpp"

class Container : public VirtualComponent {
private:
    Image image;
    char* tag;
    int size;

public:
    Container(Image containerImage, const char* containerTag, int containerSize);

    Container();

    Container(const Container& container);

    ~Container();

    Container& operator=(const Container& other);

    Image getImage();

    char* getTag();

    int getSize();

    void setImage(Image containerImage);

    void setTag(const char* containerTag);

    void setSize(int containerSize);

    void start();

    void printInfo();

};

#endif