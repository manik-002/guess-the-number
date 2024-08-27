#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
    int number,guess,n=1;
    srand(time(0));
    number = rand()%100 + 1;
    do{
        printf("enter your guess : ");
        scanf("%d",&guess);
        if (guess < number ){
            printf("higher number please.\n");
        }else if (guess > number){
            printf("your guess is high.\n");
        }else{
            printf("no. of attempts you took %d\n",n );
        }
        n++;
    } while (guess != number);
    return 0;
}