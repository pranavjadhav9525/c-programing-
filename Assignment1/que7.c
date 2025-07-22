#include<stdio.h>
int main(){
    int a,b,temp;
    printf("print a,b");
    scanf("%d%d",&a,&b);

    //logic

    temp = a;
    a = b;
    b = temp;

    printf("after swapping a:%d\n",a);
printf("after swapping b:%d\n",b);

return 0;
}