#include<stdio.h>
void getArray(int);
void main(void){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    getArray(size);
}
void getArray(int limit){
    int i,a[100];
    printf("Input %d numbers into array\n",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("The array values are\n");
    for(i=0;i<limit;i++){
        printf("%d ",a[i]);
    }
}
