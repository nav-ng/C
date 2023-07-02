#include<stdio.h>
void main(void){
    int mark;
    printf("Enter total mark percentage: ");
    scanf("%d",&mark);
    if(90<mark && mark<100){
        printf("The grade is A");
    }
    else if(80<=mark && mark<=89){
        printf("The grade is B");
    }
    else if(70<=mark && mark<=79){
        printf("The grade is C");
    }
    else if(60<=mark && mark<=69){
        printf("The grade is D");
    }
    else if(50<=mark && mark<=59){
        printf("The grade is E");
    }
    else{
        printf("Failed");
    }
}