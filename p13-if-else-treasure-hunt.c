#include <stdio.h>

int main() {

     int pathChoice,actionChoice,treasureChoice,thirdInput;
     scanf("%d",&pathChoice);
    if(pathChoice==1)
    {
        printf("Player chooses the Left path.\n");
        scanf("%d",&actionChoice);
        if(actionChoice==1)
        {
            printf("Poor choice, Game Over!\n");
        }
        else if(actionChoice==2)
        {
            printf("Player found a bridge.\n");
            scanf("%d",&thirdInput);
            if(thirdInput==1)
            {
                printf("Player crosses the bridge safely.\n");
                scanf("%d",&treasureChoice);
                if(treasureChoice==1)
                {
                    printf("All that glitters is not gold, Game Over!\n");
                }
                else if(treasureChoice==2)
                {
                    printf("All your efforts were for nothing, Game Over!\n");
                }
                else if(treasureChoice==3)
                {
                    printf("Congratulations!! You won the treasure.\n");
                }
            }
            else if(thirdInput==2)
            {
                printf("Poor luck, Game Over!\n");
            }
        }
    }
    
    else if(pathChoice==2)
    {
         printf("Player chooses the Middle path.\n");
        scanf("%d",&actionChoice);
        if(actionChoice==582)
        {
            printf("Player solved the puzzle.\n");
            scanf("%d",&treasureChoice);
                if(treasureChoice==1)
                {
                    printf("All that glitters is not gold, Game Over!\n");
                }
                else if(treasureChoice==2)
                {
                    printf("All your efforts were for nothing, Game Over!\n");
                }
                else if(treasureChoice==3)
                {
                    printf("Congratulations!! You won the treasure.\n");
                }
        }
        else
         {
             printf("Foolish player, Game Over!\n");
         }
    }
        
        
        
        else if(pathChoice==3)
        {
            printf("Player chooses the Right path.\n");
             scanf("%d",&actionChoice);
             if(actionChoice==30)
           {
                printf("Player solved the puzzle.\n");
                scanf("%d",&treasureChoice);
                if(treasureChoice==1)
                {
                    printf("All that glitters is not gold, Game Over!\n");
                }
                else if(treasureChoice==2)
                {
                    printf("All your efforts were for nothing, Game Over!\n");
                }
                else if(treasureChoice==3)
                {
                    printf("Congratulations!! You won the treasure.\n");
                }
          }
            else
           {
             printf("Foolish player, Game Over!\n");
           }
      }
    
    return 0;
}