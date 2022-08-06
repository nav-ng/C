#include<stdio.h>
void main(void){
    int size,i,arr[100];
    int* ptr=&arr[100];
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Input %d numbers into array\n",size);
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array is %d",*ptr);
}