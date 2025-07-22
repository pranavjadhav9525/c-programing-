#include<stdio.h>
int main(){
    int a,b;
    printf("enter a number a and b");
    scanf("%d%d",&a,&b);

    if(a==b){
        printf("%d is equal to %d\n",a,b);
    }
    else if(a>b){
              printf("%d is grater to %d\n",a,b);
    }
    else{
        printf("%dis less than %d\n",a,b);
    }
        

    return 0;
}