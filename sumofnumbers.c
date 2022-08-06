#include<stdio.h>
void main(void){
    int i,num,sum=0;
    printf("enter any number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum=sum+i;
    }
    printf("the sum of numbers upto %d is %d",num,sum);
}