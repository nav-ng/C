#include<stdio.h>
void main(void){
    int row,i,j,k;
    printf("Enter how many row you want: ");
    scanf("%d",&row);
    printf("The pattern you desired is\n");
    for(i=0;i<row;i++){
        if(i<row-1){
            for(j=1;j<=2*row-1;j++){
                if(j==row-i||j==row+i){
                    printf("*");
                }
                else
                    printf(" ");
            }
        }
        else{
            for(k=1;k<=2*row-1;k++){
                printf("*");
            }
        }
        printf("\n");
    }
}