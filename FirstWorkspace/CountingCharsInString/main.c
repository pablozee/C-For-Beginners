#include <stdio.h>

int countString(const char *stringToCount);

int main(int argc, char **argv)
{
	const char str[] = "Hello Universe!";
    const char str2[] = "Hello World!";
    const char str3[] = "Hi there!";
    printf("String length is: %i\n", countString(str));
    printf("String length is: %i\n", countString(str2));
    printf("String length is: %i", countString(str3));
	return 0;
}

int countString(const char *stringToCount) 
{
    const char *endPointer = stringToCount;
    while (*endPointer)
    {
        ++endPointer;
    }
    return endPointer - stringToCount;
}