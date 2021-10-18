#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

void histogram(void* _input, int h, int w, const char* filename) {

    if (freopen(filename, "w", stdout) == NULL)
        fprintf(stderr, "Invalid output file of histogram!\n");
    
    unsigned char image[h][w];
    memcpy(image, _input, sizeof image);

    // TODO: begin to draw a histogram
    // * You can just use common method like std::cout or printf
    // * to display the graph. You can find output in filename, 
    // * since I've re-direct the stdout stream to that file.

    printf("Nothing implemented!\n");
    
    std::cout << "Nothing implemented!" << std::endl;

    // TODO: end drawing the histogram
}