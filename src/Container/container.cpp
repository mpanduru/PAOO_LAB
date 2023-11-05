#include <iostream>
#include <cstring>
#include "container.hpp"
#include "image.hpp"

Container::Container(Image containerImage, const char* containerTag, int containerSize): size(containerSize) {
    image = containerImage;
    
    tag = new char[strlen(containerTag) + 1];
    strcpy(tag, containerTag);
}

Container::Container(): tag(NULL), size(0), image(Image()) {}

Container::Container(const Container& container): size(container.size) {
    std::cout << "copy constructor aici" << std::endl;
    image = container.image;
    tag = new char[strlen(container.tag) + 1];
    strcpy(tag, container.tag);
}

Container::~Container() {
    std::cout << "destructor super aici " << std::endl;
    delete []tag;
}

Container& Container::operator=(const Container& other) {
    std::cout << "assignment operator aici" << std::endl;
    image = other.image;
    size = other.size;

    tag = new char[strlen(other.tag) + 1];
    strcpy(tag, other.tag);

    return *this;
}

Container::Container(Container&& container) {
    Image movedImage(std::move(container.image));
    image = movedImage;
    tag = container.tag;
    size = container.size;

    container.tag = NULL;
    container.size = 0;
    std::cout << "move constructor container" << std::endl;
}

Image Container::getImage() {
    return image;
}

char* Container::getTag() {
    char* newTag;
    newTag = new char[strlen(tag) + 1];
    strcpy(newTag, tag);

    return newTag;
}

int Container::getSize() {
    return size;
}

void Container::setImage(Image containerImage) {
    Image imageCopy = containerImage;
    image = imageCopy;
}

void Container::setTag(const char* containerTag) {
    tag = new char[strlen(containerTag) + 1];
    strcpy(tag, containerTag);
}

void Container::setSize(int containerSize) {
    size = containerSize;
}

void Container::start() {
    std::cout << "Container started: ";
    this->printInfo();
}

void Container::printInfo() {
    std::cout << "Image: " << image.getName() << " Tag: " << tag << " Size (GB): " << size << std::endl;
}