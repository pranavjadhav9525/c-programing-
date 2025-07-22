// #include<stdio.h>
// int m{
//     int a,b,c;

//     printf("enter a number a,b,c");
//     scanf("%d%d%d &a,&b,&c");

//     if(b>a && b<c){
//         printf("%d between thw no %d and %d ",a,b,c);
// }else{
//     printf("%d is not between thw no %d and %d ",a,b,c);
// }
//     }



//#include<stdio.h>
//int main(int argc, char const *argv[])
//{
//    int a,b,c;
//
//     printf("enter a number a,b,c");
//     scanf("%d%d%d" ,&a,&b,&c);
//     if(b>a && b<c){
//         printf("%d between thw no %d and %d ",a,b,c);
// }else{
//     printf("%d is not between thw no %d and %d ",a,b,c);
//
// }
//    return 0;
//}

#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a 3 numbers :");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a<c || a<b && a>c)
    printf("%d is between %d and %d", a,b,c);
    else if (b>a && b<c || b<a && b>c);
    printf("%d is the betwwn %d and %d",b,a,c);
    else
        print("%d is the between %d and %d",c,a,b);

   return 0;     

}
