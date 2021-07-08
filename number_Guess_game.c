#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, nguess=1;
    srand(time(0));
    number = rand()%100 +1;
    //printf("The no is %d\n",number);
    
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
       if(number<guess){
           printf("Guess smaller number \n");
       }
       else if(number>guess){
           printf("Guess larger number \n");
       }
       else{
           printf("You guessed it right, in %d attempt\n",nguess);
       }
       nguess++;
    } while(guess!= number);
    return 0;
}