#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num=0,n;
    srand(time(0));
    int guess = rand()%100+1;
    printf("Welcome in the guess the number game\n\n");
    printf("You have only 5 attempts to find the guessing number\n");
    printf("Enter your guessing number from 1 to 100: ");

    while(n<5){
        scanf("%d", &n);
        if(n==guess){
            printf("Hurrahhhh!!!! You won the game!!!!\n");
            break;
        }
        else if(n>guess){
        printf("The number will be smaller. Try again, you have still attempts left\n");
        }
        else 
        {
                        printf("The number will be larger. Try again, you have still attempts left\n");

        }
        num++;
    }
    if(num==5)
    {
         printf("You completed all 5 attempts\n");
        printf("Game Over\n");
    }
}