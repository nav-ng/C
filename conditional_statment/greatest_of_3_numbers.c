#include <stdio.h>
void main(void){
    int num1,num2,num3;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Enter third number: ");
    scanf("%d",&num3);
    if(num1>num2){
        if(num1>num3){
            printf("%d is greater",num1);
        }
        else{
            printf("%d is greater",num3);
        }
    }
    else if(num2>num3){
        printf("%d is greater",num2);
    }
    else{
        printf("%d is greater",num3);
    }
}
