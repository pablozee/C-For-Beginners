#include <stdio.h>

void square(int *num);

int main(int argc, char **argv)
{
    int number = 7;
    square(&number);
	printf("%d", number);
    
	return 0;
}

void square(int *num) 
{
    *num = *num * *num;
}