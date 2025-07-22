#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter a three side of tringle");
    scanf("%d%d%d",&x,&y,&z);

    if(x + z > y && z + y > x && x + y > z){
        printf("tringle are valid");
    }else{
        printf("tringle are not valid");
    }

    return 0;
}