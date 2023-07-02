#include<stdio.h>
void main(){
    int array[100],size,i;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter the elements into array\n");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("The array user given is\n");
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    printf("The reverse of the given array is\n");
    for(i=size-1;i>=0;i--){
        printf("%d ",array[i]);
    }
}