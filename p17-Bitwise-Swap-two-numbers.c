#include <stdio.h>

int main() {

    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    // a=a^b; // Stores a dfferent value in a
    // b=b^a; // value of a is now stored in b
    // a=a^b; // (a)^(b) --> (a^b)^(a) --> a^a^b --> 0^b --> (value of b is now stored in a)
    // printf("%d\n",a);
    // printf("%d",b); a=10,b=5,b=15,a=5,b=10
    b=a+b;
    a=b-a;
    b=b-a;
    
    
    
     printf("%d\n",a);
     printf("%d",b);
    return 0;
}


