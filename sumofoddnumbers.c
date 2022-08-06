#include<stdio.h>
void main(void){
    int n,i,sum=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    printf("sum of odd numbers in between 0 and %d is:%d",n,sum);

}