#include<stdio.h>
int main(){
    int year;
    printf("enter a year");
    scanf("%d",&year);

    if(year % 4 && year % 100 !=0 && year % 400==0){
        printf("year is lip year");
    }
        else{
            printf("not lip year");
        
    }
    return 0;
}