#include<stdio.h>
void main(void){
    int size,i,sum=0,a[100];
    printf("Enter array size:");
    scanf("%d",&size);
    printf("Enter %d numbers\n",size);
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
        sum=sum+a[i];
    }
    printf("The sum of elements in the array is: %d",sum);
}