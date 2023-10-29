#include <iostream>
#include <cstring>
#include "image.hpp"

Image::Image(const char* imageName, const char* imageRepository, int imageSize): size(imageSize){
    name = new char[strlen(imageName) + 1];
    strcpy(name, imageName);
    repository = new char[strlen(imageRepository) + 1];
    strcpy(repository, imageRepository);
}

Image::Image(): name(NULL), repository(NULL), size(0) {}

Image::Image(const Image& image): size(image.size){
    name = new char[strlen(image.name) + 1];
    strcpy(name, image.name);
    repository = new char[strlen(image.repository) + 1];
    strcpy(repository, image.repository);
}

Image::~Image(){
    delete []name;
    delete []repository;
}

Image& Image::operator=(const Image& other){
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);
    repository = new char[strlen(other.repository) + 1];
    strcpy(repository, other.repository);
    size = other.size;

    return *this;
}

char* Image::getName(){
    char* newName;
    newName = new char[strlen(name) + 1];
    strcpy(newName, name);

    return newName;
}

char* Image::getRepository(){
    char* newRepository;
    newRepository = new char[strlen(repository) + 1];
    strcpy(newRepository, repository);

    return newRepository;
}

int Image::getSize(){
    return size;
}

void Image::setName(const char* imageName){
    name = new char[strlen(imageName) + 1];
    strcpy(name, imageName);
}

void Image::setRepository(const char* imageRepository){
    repository = new char[strlen(imageRepository) + 1];
    strcpy(repository, imageRepository);
}

void Image::setSize(int imageSize){
    size = imageSize;
}

void Image::printInfo(){
    std::cout << "Repository: " << repository << " Name: " << name << " Size (MB): " << size << std::endl;
}