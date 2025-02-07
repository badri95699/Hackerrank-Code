// Write a program to determine the largest number among three integer numbers.

#include <stdio.h>

int main() {

    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a>b && b>c) || (a>c && c>b) || (a>b && b==c)) 
    {
        printf("The largest number is : %d",a);
    }
    else if((b>a && a>c) || (b>c && c>a) || (b>a && a==c))
    {
        printf("The largest number is : %d",b);
    }
    else if((c>b && b>a) || (c>a && a>b) || (c>b && b==a))
    {
        printf("The largest number is : %d",c);
    }
    else
    {
        printf("The largest number is : %d",a);
    }
    return 0;
}