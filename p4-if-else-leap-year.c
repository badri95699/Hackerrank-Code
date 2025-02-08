// A year is considered a leap year if:
// It is divisible by 4.
// However, if it is divisible by 100, it must also be divisible by 400 to be considered a leap year.
// Write a program that checks if a given year is a leap year or not, outputs the result in a specific format, and handles invalid years as well.

#include <stdio.h>

int main() {

    int y;
    scanf("%d",&y);
    if(y<=0)
    {
        printf("The given year %d is Invalid year.",y);
    }
    else if(y>0 && y<4)
    {
        printf("No, %d is not a leap year.",y);
    }
    else if(y%4==0)
    {
        if(y%100!=0)
        {
            printf("Yes, %d is a leap year.",y);
        }
        else if(y%100==0)
        {
            if(y%400==0)
            {
            printf("Yes, %d is a leap year.",y);
            }
            else
            {
            printf("No, %d is not a leap year.",y);
            }
        }
        // else
        // {
        //     printf("No, %d is not a leap year.",y);
        // }
    }
    else
    {
        printf("No, %d is not a leap year.",y);
    }
    return 0;
}