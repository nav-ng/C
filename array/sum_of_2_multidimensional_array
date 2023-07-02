#include<stdio.h>
void main(void){
    int size,i,j,a[100][100],b[100][100],c[100][100];
    printf("Enter the size of arrays: ");
    scanf("%d",&size);
    printf("Input %d numbers into array 1\n",size);
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Input %d numbers into array 2\n",size);
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The sum of two array is\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}