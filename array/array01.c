#include<stdio.h>
void main(void){
    int size,i,a[100];
    printf("Enter array Size: ");
    scanf("%d",&size);
    printf("Enter %d numbers\n",size);
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Entered values are:");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}
