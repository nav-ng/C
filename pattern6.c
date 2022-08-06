#include<stdio.h>
void main(void){
    int row,i,j;
    printf("Enter how many row you want: ");
    scanf("%d",&row);
    printf("The pattern you desired is\n");
    for(i=0;i<row;i++){
        for(j=1;j<=2*row-1;j++){
            if(j==row-i||j==row+i){
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    if(i==row){
        for(j=1;j<=2*row-1;j++){
            printf("*");
        }
    }
}