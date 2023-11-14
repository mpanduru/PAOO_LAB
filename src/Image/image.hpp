#ifndef IMAGE_HPP
#define IMAGE_HPP

namespace VirtualNamespace {

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

    Image(Image&& container);

    char* getName();

    char* getRepository();

    int getSize();

    void setName(const char* imageName);

    void setRepository(const char* imageRepository);

    void setSize(int imageSize);

    template <typename U> void processData(U data){
        std::cout << "Image " << name << " processed data: " << data << std::endl;
    }

    void printInfo();

};

}

#endif