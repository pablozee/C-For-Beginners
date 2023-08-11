#include <stdio.h>

int main(int argc, char **argv)
{
    enum companies { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };
    enum companies goog = GOOGLE;
    enum companies fbook = FACEBOOK;
    enum companies msoft = MICROSOFT;
    
    printf("The value of Google is: %d", goog);
    printf("\n");
    printf("The value of Facebook is: %d", fbook);
    printf("\n");
    printf("The value of Microsoft is: %d", msoft);
	return 0;
}
