#ifndef IMAGE_HPP
#define IMAGE_HPP

class Image {
private:
    char* name;
    char* repository;
    int size;

public:
    Image(const char* imageName, const char* imageRepository, int imageSize);

    Image();

    Image(const Image& image);

    ~Image();

    Image& operator=(const Image& other);

    char* getName();

    char* getRepository();

    int getSize();

    void setName(const char* imageName);

    void setRepository(const char* imageRepository);

    void setSize(int imageSize);

    void printInfo();

};

#endif