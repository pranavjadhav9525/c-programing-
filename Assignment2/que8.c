#include<stdio.h>
int main(){
    char ch;
    printf("enter a lower case alpha");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
    printf("vowels");
    }
    else{
        printf("consonent");
    }

    return 0;
}