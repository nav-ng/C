#include<stdio.h>
void main(void){
    int n,i,flag=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0)
            flag=1;
            break; 
    }
    if(flag==0){
        printf("Its a prime number");
    }
    else{
        printf("Its not a  prime number");
    }
}