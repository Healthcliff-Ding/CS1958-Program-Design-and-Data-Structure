#include <cstdio>
#include <cstdlib>
#include <cstring>


void transform(void* _input, int h, int w, void* _ret) {

    unsigned char image[h][w];
    unsigned char _image[h][w];
    memcpy(image, _input, sizeof image);

    // TODO: begin your image transformation algorithm
    // * I just write an identical transformation here

    for (int i = 0; i < h; ++i)
        for (int j = 0; j < w; ++j)
            _image[i][j] = image[i][j];

    // TODO: end your image transformation algorithm
    
    memcpy(_ret, _image, sizeof _image);
}