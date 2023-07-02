#include<stdio.h>
void main(){
    int i,j,k,limit;
    printf("Enter the limit of increment row: ");
    scanf("%d",&limit);
    printf("The desired pattern is this\n");
    for(i=1;i<=limit;i++){
        for(j=0;j<limit-i;j++){
            printf(" ");
        }
        for(k=0;k<(2*i)-1;k++){
            printf("*");
        }
    printf("\n");
    }
    for(i=limit;i>1;i--){
        for(j=0;j<limit-i+1;j++){
            printf(" ");
        }
        for(k=0;k<2*i-3;k++){
            printf("*");
        }
    printf("\n");
    }
}