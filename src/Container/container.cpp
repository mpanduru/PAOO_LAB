#include <iostream>
#include <cstring>
#include "container.hpp"
#include "image.hpp"

namespace VirtualNamespace {

template <typename T>
Container<T>::Container(Image containerImage, const char* containerTag, int containerSize, T containerData): size(containerSize), containerData(containerData) {
    image = containerImage;
    
    tag = new char[strlen(containerTag) + 1];
    strcpy(tag, containerTag);
}

template <typename T>
Container<T>::Container(): tag(NULL), size(0), image(Image()), containerData(0) {}

template <typename T>
Container<T>::Container(const Container<T>& container): size(container.size), containerData(container.containerData) {
    std::cout << "copy constructor aici" << std::endl;
    image = container.image;
    tag = new char[strlen(container.tag) + 1];
    strcpy(tag, container.tag);
}

template <typename T>
Container<T>::~Container() {
    std::cout << "destructor super aici " << std::endl;
    delete []tag;
}

template <typename T>
Container<T>& Container<T>::operator=(const Container<T>& other) {
    std::cout << "assignment operator aici" << std::endl;
    image = other.image;
    size = other.size;
    containerData = other.containerData;

    tag = new char[strlen(other.tag) + 1];
    strcpy(tag, other.tag);

    return *this;
}

template <typename T>
Container<T>::Container(Container<T>&& container) {
    Image movedImage(std::move(container.image));
    image = movedImage;
    tag = container.tag;
    size = container.size;
    containerData = container.containerData;

    container.tag = NULL;
    container.size = 0;
    std::cout << "move constructor container" << std::endl;
}

template <typename T>
Image Container<T>::getImage() {
    return image;
}

template <typename T>
char* Container<T>::getTag() {
    char* newTag;
    newTag = new char[strlen(tag) + 1];
    strcpy(newTag, tag);

    return newTag;
}

template <typename T>
int Container<T>::getSize() {
    return size;
}

template <typename T> 
T Container<T>::getContainerData(){
    return containerData;
}

template <typename T> 
void Container<T>::setContainerData(T data) {
    containerData = data;
}

template <typename T>
void Container<T>::setImage(Image containerImage) {
    Image imageCopy = containerImage;
    image = imageCopy;
}

template <typename T>
void Container<T>::setTag(const char* containerTag) {
    tag = new char[strlen(containerTag) + 1];
    strcpy(tag, containerTag);
}

template <typename T>
void Container<T>::setSize(int containerSize) {
    size = containerSize;
}

template <typename T>
void Container<T>::start() {
    std::cout << "Container started: ";
    this->printInfo();
}

template <typename T>
void Container<T>::printInfo() {
    std::cout << "Image: " << image.getName() << " Tag: " << tag << " Size (GB): " << size << std::endl;
}

template class Container<int>;
template class Container<double>;

}