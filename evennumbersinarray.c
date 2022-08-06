#include<stdio.h>
void main(void){
    int limit,i,a[100],num=0;
    printf("Enter array size: ");
    scanf("%d",&limit);
    printf("Input %d numbers into array\n",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<limit;i++){
        if(a[i]==1){
            num=num;
        }
        else if(i%2==0){
            num=num+1;
        }
    }
    printf("Number of even numbers in the given array is: %d ",num);
}