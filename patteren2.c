#include<stdio.h>
void main(void){
    int n,i,j;
    printf("Enter how many level you want: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}