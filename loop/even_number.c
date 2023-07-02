#include<stdio.h>
void main(void){
    int limit,i;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    printf("The even number between 0 to %d are\n",limit);
    for(i=2;i<=limit;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
}