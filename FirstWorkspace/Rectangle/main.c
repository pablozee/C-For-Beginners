#include <stdio.h>

int main(int argc, char **argv) {
    double height = 2.0;
    double width = 3.0;
    double perimeter = 2.0 * (height + width);
    double area = height * width;
    
    printf("The perimeter of the rectangle with height = %.2f and width = %.2f is %.2f\n", height, width, perimeter);
    printf("The area of the rectangle with height = %.2f and width = %.2f is %.2f\n", height, width, area);
}
