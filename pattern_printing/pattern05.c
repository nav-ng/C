#include<stdio.h>
void main(void){
    int row,i,j;
    printf("Enter how many row you need: ");
    scanf("%d",&row);
    printf("The pattern is\n");
    for(i=row;i>0;i--){
        for(j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
}