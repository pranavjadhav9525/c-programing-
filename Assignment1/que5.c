#include<stdio.h>
int main(){
    // input
    int a,b;
    printf("enter a and b");
    scanf("%d%d",&a,&b);

    // cal

    int ari =  (a+b)/2;
    int har =  a*b/(a+b);

    //output

    printf("ari is:%d\n",ari);
    printf("har is:%d\n",har);



return 0;
}


