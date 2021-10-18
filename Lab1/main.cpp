#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "transform.hpp"
#include "histogram.hpp"

inline int read()
{
    char c = getchar();
    int ret = 0, f = 1;
    while (c > '9' || c < '0')
    {
        if (c == '-')
            f = -1;
        c = getchar();
    }
    while (c >= '0' && c <= '9')
        ret = ret * 10 + c - '0', c = getchar();
    return ret * f;
}

// * image :  input gray scale image
// * _image: output gray scale image

int main()
{
    FILE *fout = fopen("out.txt", "w");

    int w, h;
    if (scanf("%d%d", &h, &w) != 2)
        fprintf(stderr, "Input error!\n");

    unsigned char image[h][w];
    memset(image, 0, sizeof image);

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            int x = read();
            image[i][j] = (unsigned char)x;
        }
    }

    unsigned char _image[h][w];

    printf("This picture has %d x %d pixels\n", h, w);

    transform((void*)image, h, w, (void*)_image);

    fprintf(fout, "%d %d\n", h, w);

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            fprintf(fout, "%d ", _image[i][j]);
        }
    }

    fclose(fout);

    // TODO you can specify file path to histogram
    histogram(image, h, w, "histo0.txt");
    histogram(_image, h, w, "histo1.txt");
    // TODO end

    return 0;
}
