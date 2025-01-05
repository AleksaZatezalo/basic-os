#include <stdio.h>

int main(int argc, char** argv)
{
    if (argc < 3) {
        printf("Santax: %s <disk image> <file name>", argv[0]);
        return -1;
    }


    return 0;
}