#include <stdio.h>
int main(void)
{
    int seconds = 0, minutes = 0, hours = 0, days = 0, weeks = 0;
    printf("Hello there please enter a number of seconds: ");
    scanf("%d", &seconds);
    printf("You have entered %d seconds\n", seconds);

    while(seconds>=604800){
        seconds -= 604800;
        weeks += 1;
    }
    while(seconds>=86400){
        seconds -= 86400;
        days += 1;
    }
    while(seconds>=3600){
        seconds -= 3600;
        hours += 1;
    }
    while(seconds>=60){
        seconds -= 60;
        minutes += 1;
    }
    printf("weeks: %d, days: %d, hours: %d, minutes: %d, seconds:  %d",weeks,days,hours,minutes,seconds);

}