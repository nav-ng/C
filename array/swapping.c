#include<stdio.h>
void main(void){
    int size,i,a[100],b[100],c[100];
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Input %d numbers into array 1\n",size);
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("input %d numbers into array 2\n",size);
    for(i=0;i<size;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<size;i++){
        c[i]=a[i];
        a[i]=b[i];
        b[i]=c[i];
    }
    printf("The swapped arrays are\n");
    printf("Array1: ");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\nArray2: ");
    for(i=0;i<size;i++){
        printf("%d ",b[i]);
    }
}