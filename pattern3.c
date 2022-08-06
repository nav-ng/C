#include<stdio.h>
void main(void){
    int row,i,j;
    char alphabet[100]={'A','B','C','D','E'};
    printf("How many row you need: ");
    scanf("%d",row);
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("%c ",alphabet[j]);
        }
        printf("\n");
    }
}