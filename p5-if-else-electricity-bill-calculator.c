#include <stdio.h>

int main() {

    int n;
    float bill=0;
    scanf("%d",&n);
    if(n<0)
    {
        printf("Invalid Input!");
    }
    else if(n>=0 && n<=100)
    {
        bill=n*5;
        if(bill<=1200)
    {
        bill=bill - (0.1*bill);
    }
    printf("The electricity bill is: %.2f.",bill);
    }
    else if(n>100 && n<=300)
    {
        bill=100*5 + (n-100)*7;
        if(bill<=1200)
    {
        bill=bill - (0.1*bill);
    }
    printf("The electricity bill is: %.2f.",bill);
    }
     else if(n>300)
    {
        bill=100*5 + 200*7 + (n-300)*10;
         if(bill<=1200)
    {
        bill=bill - (0.1*bill);
    }
    printf("The electricity bill is: %.2f.",bill);
    }
    return 0;
}