#include<stdio.h> 
int main(){
    //input
     float sp,cp;
     printf("enter a sp and cp");
     scanf("%f%f",&sp,&cp);

     //logic
if(sp>cp){
    printf("profit");

}else{
    printf("loss");
}
//output

printf("profit is:%f\n",sp);
printf("loss is:%f\n",cp);

return 0;



     
}