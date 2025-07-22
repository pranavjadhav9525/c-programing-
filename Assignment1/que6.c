#include<stdio.h>
int main (){
    int l,b,h;
    printf("print l,b,h");
    scanf("%d%d%d",&l,&b,&h);
     
    //cal

    int surface area = 2*(l*b+l*h+b*h);
    int volume = l*b*h;

    // output

    printf("surface is:"\n,surface);
    printf("volume is:"\n,volume);

    return 0;

}
