#include<stdio.h>
int main(){
    int number;

    //input

    printf("enter a number:");
    scanf("%d", &number);

    if(number % 5 == 0 && number % 7 == 0){
        printf("Divisible by both 5 &7%d",number);
    }
else{
   printf("%dThe number is  divisible by  5 and 7.", number);
}
return 0;
}