#include <stdio.h>

int main() {
    int num = 10;              // Declare an integer variable
    int *ptr;                  // Declare a pointer to an integer
    
    ptr = &num;                // Assign the address of 'num' to 'ptr'
    
    // Print the value of 'num' and its address
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);
    
    // Print the value of 'ptr' and what 'ptr' points to
    printf("Value of ptr (address of num): %p\n", (void*)ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);
    
    // Modify 'num' using the pointer
    *ptr = 20;
    
    // Print the new value of 'num'
    printf("New value of num: %d\n", num);
    
    return 0;
}