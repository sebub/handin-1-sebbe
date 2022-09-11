#include <stdio.h>
int main(void)
{
    int seconds = 0, minutes = 0, hours = 0, days = 0, weeks = 0;
    char tempchar;
    printf("Hello there please enter a number of seconds: ");

    while(1)
    {

        if(scanf(" %d%c", &seconds, &tempchar) != 2 || tempchar != '\n') {
            printf(" Please enter a valid number\n");
        }
        else{
            printf(" You have entered %d seconds\n",seconds);
            break;

        }
        while(getchar() != '\n');
    }
    printf("%d",seconds);

    if (seconds > 604800)
    {
        weeks = seconds / 604800;
        seconds = seconds % 604800;
    }

    if (seconds > 86400)
    {
        days = seconds / 86400;
        seconds = seconds % 86400;
    }

    if (seconds > 3600)
    {
        hours = seconds / 3600;
        seconds = seconds % 3600;
    }

    if (seconds > 60)
    {
        minutes = seconds / 60;
        seconds = seconds % 60;
    }

    printf("weeks: %d, days: %d, hours: %d, minutes: %d, seconds:  %d",weeks,days,hours,minutes,seconds);

}
