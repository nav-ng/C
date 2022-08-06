#include<stdio.h>
void main(void){
    int size,i,a[100],j,temp;
    printf("Enter array size: ");
    scanf("%d",&size);
    printf("Input %d numbers into the array\n",size);
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The sorted array is\n");
    for(i=0;i<size;i++){
    printf("%d ",a[i]);
    }
}