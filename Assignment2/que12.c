#include<stdio.h>
/*

int main(){
    int a,b;
    printf("enter 2 number");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("enter max is %d", a);
    }
    else{
        printf("enetr max %d",b);
    }
return 0;
}


#include<stdio.h>
int main(){
    int a,b;
    printf("enter a number");
    scanf("%d%d",&a,&b);
     printf(" max is %d",(a>b)?a:b);
    
}*/

int main() {
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Maximum = %d\n", a);
    else if (b >= a && b >= c)
        printf("Maximum = %d\n", b);
    else
        printf("Maximum = %d\n", c);

    return 0;
}