#include <stdio.h>
int main(void)
{
#define sec_week 604800
#define sec_day 86400
#define sec_hour 3600
#define sec_min 60

    int seconds = 0, minutes = 0, hours = 0, days = 0, weeks = 0, d;
    char tempchar;
    printf("Hello there please enter a number of seconds: ");

    while(1)
    {
        //Since scanf returns value based on number of inputs we can check if the use input a valid int. The only way scanf
        //returns 2 is if the use inputs an int followed by a char the only way we can enter the else statement is by entering
        //an int greater than 0 followed by the enter key.
        if(scanf(" %d%c", &seconds, &tempchar) != 2 || tempchar != '\n' || seconds < 0)
        {
            printf(" Please enter a valid number\n");
            seconds = 0;
        }
        else
        {
            printf(" You have entered %d seconds\n",seconds);
            //breaks the loop if the user enters an integer
            break;

        }
        printf("%d""%c",seconds, tempchar);
        //Used to empty the stdin(standard input) this is in order to make sure my if statement is not skipped because
        //I have something in my buffer
        while(getchar() != '\n');
    }


    weeks = seconds/sec_week;
    seconds%=sec_week;

    days = seconds/sec_day;
    seconds%=sec_day;

    hours = seconds/sec_hour;
    seconds%=sec_hour;

    minutes = seconds/sec_min;
    seconds%=sec_min;


    printf("weeks: %d, days: %d, hours: %d, minutes: %d, seconds: %d",weeks,days,hours,minutes,seconds);

}