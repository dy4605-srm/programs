#include <stdio.h>

int main() {
    // Declare an integer pointer and initialize it to NULL
    int *ptr = NULL; 

    // Check if the pointer is NULL before attempting to dereference it
    if (ptr == NULL) {
        printf("The pointer 'ptr' is a NULL pointer and does not point to any valid memory location.\n");
    } else {
        // This block will not execute in this example because ptr is NULL
        // Dereferencing a NULL pointer leads to undefined behavior/crash
        printf("The value pointed to by 'ptr' is: %d\n", *ptr); 
    }

    // Assign a valid address to the pointer
    int value = 10;
    ptr = &value;

    // Now, the pointer is no longer NULL and can be safely dereferenced
    if (ptr != NULL) {
        printf("The pointer 'ptr' now points to a valid memory location.\n");
        printf("The value pointed to by 'ptr' is: %d\n", *ptr);
    }

    return 0;
}
