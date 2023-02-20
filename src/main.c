#include <stdio.h>

#define STB_DS_IMPLEMENTATION
#include "stb/stb_ds.h"

int main(int argc, char **argv) {
    printf("%s\n", "Hello World");
    int* arr = NULL;
    arrput(arr, 1);
    printf("%ld\n", arrlen(arr));
    return 0;
}
