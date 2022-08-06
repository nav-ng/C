#include<stdio.h>
void main(void){
    float mark;
    printf("Enter your mark: ");
    scanf("%f",&mark);
    if(mark>50){
        printf("You are passed");
    }
    else
    printf("You are not passed");
}