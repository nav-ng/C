#include<stdio.h>
void main(void){
    int n,i,result;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        result=i*n;
        printf("\n%d*%d=%d",i,n,result);
    }
}