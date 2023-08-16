#include <stdio.h>

int main(int argc, char **argv)
{
	int mins = 0;
    printf("Enter the number of minutes:\n");
    scanf("%d/n", &mins);
    double minutesInYear = 60 * 24 * 365;
    double years = mins / minutesInYear;
    double days = (mins / 60) / 24;
    printf("%d minutes is %e years and %e days", mins, years, days);
    
	return 0;
}
