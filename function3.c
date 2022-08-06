#include<stdio.h>
void getArray(int*,int);
void displayArray(int*,int);
void main(void){
    int size,array[100];
    int* ptr=&array[100];
    printf("Enter the size of array: ");
    scanf("%d",&size);
    getArray(ptr,size);
    displayArray(ptr,size);
    }
void getArray(int* ptr,int limit){
    int i;
    printf("Input %d values into array\n",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&*ptr);
    }
}
void displayArray(int* ptr,int limit){
    int i;
    printf("The array is\n");
    for(i=0;i<limit;i++){
        printf("%d ",ptr);
    }
}