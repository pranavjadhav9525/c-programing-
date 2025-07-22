#include<stdio.h>
int main(){
    // input
    float radius,height,PI=3.14;
    printf("enter r and h");
    scanf("%f%f",&radius,&height);

    //calculation

    float surface = 2 * PI * radius * radius;
    float volume = PI *radius *radius*height;


    //output

    printf("surface is:%f\n",surface);
    printf("volume is:%f\n",volume);



    return 0;





}