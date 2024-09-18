#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number;
    int guess;
    int nguesses=1;

    srand(time(0));
    number=rand()%100+1;
     do
     {
        printf("enter your guess:");
        scanf("%d",&guess);
        if (guess>number){
            printf("too high!\n");
        }
        else if (guess<number){
            printf("too low!\n");
        }
        else{
            printf("guess is correct!!!\n");
        }
        nguesses++;
     } while (guess!=number);
     printf("the number is :%d\n",number);
     printf("the no of guesses is: %d\n",nguesses);
     
    return 0;


}