#include <stdio.h>

int main() {

    int budget,numGuests,foodCostPerGuest,decorationCost,musicCost,extraExpenses;
    scanf("%d",&budget);
    scanf("%d",&numGuests);
    scanf("%d",&foodCostPerGuest);
    scanf("%d",&decorationCost);
    scanf("%d",&musicCost);
    scanf("%d",&extraExpenses);
    int foodCost=numGuests*foodCostPerGuest;
    int totalCost=foodCost+decorationCost+musicCost+extraExpenses;
    if(budget>=totalCost && numGuests>5 && numGuests<=50 && (decorationCost<0.30*budget || foodCost<0.50*budget) )
    {
        if(numGuests>25)
        {
            if(musicCost>0)
            {
                printf("Celebration Approved");
            }
            else
            {
                printf("Celebration Denied");
            }
        }
        else
        {
            printf("Celebration Approved");
        }
    }
    else
    {
        printf("Celebration Denied");
    }
    
//     if(budget>=totalCost && numGuests>5 && numGuests<=50 && (decorationCost<0.30*budget || foodCost<0.50*budget))
//     {
//         printf("hello");
//     }
//     if(budget>=totalCost)
//     {
//         printf("hello");
//     }
//     if(numGuests>5 && numGuests<=50)
//     {
//         printf("hello");
//     }
   
    
    
    
    return 0;
}