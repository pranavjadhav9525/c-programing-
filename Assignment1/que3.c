#include<stdio.h>
int main(){
    //input
    float f; 
    printf("enter f");
    scanf("%f",&f);

    //calculations

    float celsius = 5.0/9.0*(f-32);
    float kelvin = celsius + 273.15;

    //output

    printf("celsius is:%f\n",celsius);
    printf("kelvin is:%f\n",kelvin);



    return 0;






}