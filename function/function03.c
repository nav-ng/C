#include<stdio.h>
int getArray(int arr[],int);
void displayArray(int arr[],int);
void main(){
    int size,array[100];
    printf("Enter the size of array: ");
    scanf("%d",&size);
    array[100]=getArray(array,size);
    displayArray(array,size);
    }
int getArray(int arr[],int limit){
    int i;
    printf("Input %d values into array\n",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&arr[i]);
    }
    return arr[i];
}
void displayArray(int arr[],int limit){
    int i;
    printf("The array is\n");
    for(i=0;i<limit;i++){
        printf("%d ",arr[i]);
    }
}