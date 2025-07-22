#include<stdio.h>
int main(){
    float l,b,h;
    printf("enter l,b,h");
    scanf("%f%f%f",&l,&b,&h);

    //cal

    float surfaearea =2*(l*b + l*h +b*h);
    float volume = (l*b*h);

    //output

    printf("surface area is %f\n",surfaearea);
    printf("volume is %f\n",volume);

    return 0;

}