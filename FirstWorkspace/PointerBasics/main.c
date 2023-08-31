#include <stdio.h>
#include <stddef.h>

int main(int argc, char **argv)
{
	int myNumber = 10;
    int *myPointer = NULL;
    
    printf("Address of my number: %p", &myNumber);
    
    myPointer = &myNumber;
    
    printf("\nAddress of my pointer: %p", &myPointer);
    printf("\nValue of my pointer: %p", myPointer);
    printf("\nValue of what my pointer points to: %d", *myPointer);
    
    return 0;
}
