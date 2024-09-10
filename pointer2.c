///Write a program to (demo. the size of a ptr)
#include<stdio.h>
int main()
{
    // Declare pointers of different types
    int *intPtr;
    float *floatPtr;
    double *doublePtr;
    char *charPtr;
    void *voidPtr;
    long  *longPtr;

    // Print the size of each pointer
    printf("Size of int pointer: %zu bytes\n", sizeof(intPtr));
    printf("Size of float pointer: %zu bytes\n", sizeof(floatPtr));
    printf("Size of double pointer: %zu bytes\n", sizeof(doublePtr));
    printf("Size of char pointer: %zu bytes\n", sizeof(charPtr));
    printf("Size of void pointer: %zu bytes\n", sizeof(voidPtr));
    printf("Size of char long: %zu bytes\n", sizeof(longPtr));

    return 0;
}

