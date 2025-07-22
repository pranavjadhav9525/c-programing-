#include<stdio.h>
int main(){
    //Input

    float radius,pi=3.14;
    printf("Enter r to calculate area and circum of circle");
    scanf("%f",&radius);
  

    //calculation

   
     
    float area = pi * radius * radius;
    float circum = 2 * pi * radius;

    //output
    printf("area of circle is :%f\n",area);
    printf("circumfarance of circle:%f",circum);


    return 0;
    

}
