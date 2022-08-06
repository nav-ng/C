#include<stdio.h>
void sum();
void main(void){
    sum();
}
void sum(){
    int num1,num2,result=0;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    result=num1+num2;
    printf("The result is %d",result);
}