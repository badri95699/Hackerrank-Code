#include <stdio.h>

int main() {

    int age,income,risk;
    scanf("%d",&age);
    scanf("%d",&income);
    scanf("%d",&risk);
    if(age>50 && (income<=75000 || risk<3))
    {
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    }
     else if(age<30)
    {
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    else if(income<=30000 && risk<3)
    {
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    }
    else if(age>=30 && age<=50 && income<=75000 && risk==2)
    {
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
     else if(age>=30 && age<=50 && income>75000 && risk<3)
    {
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
   
     else if(age>=30 && age<=50 && income>75000 && risk==3)
    {
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
     else if(age>50 && income>75000 && risk==3)
    {
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    return 0;
}