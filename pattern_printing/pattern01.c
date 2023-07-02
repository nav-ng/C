#include<stdio.h>
void main(void){
    int row,i,j,k=0;
    printf("Enter how many row you need: ");
    scanf("%d",&row);
    printf("Here is the pattern you desired\n");
    for(i=1;i<=row;i++){
        for(j=1;j<=(4*(row-1)+1);j++){
            if(j<=((row-i)*2) || j>=((row+(i-1))*2)){
                printf(" ");
            }
            else{
                if(j%2!=0){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}
