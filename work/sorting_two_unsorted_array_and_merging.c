#include<stdio.h>
void main(){
    int size1,array1[100],size2,array2[100],i,j,k,array3[100],l;
    printf("Enter the size of array 1: ");
    scanf("%d",&size1);
    printf("input %d elements into array 1\n",size1);
    for(i=0;i<size1;i++){
        scanf("%d",&array1[i]);
    }
    printf("Enter the size of array 2: ");
    scanf("%d",&size2);
    printf("input %d elements into array 2\n",size2);
    for(i=0;i<size2;i++){
        scanf("%d",&array2[i]);
    }
    for(i=0;i<size1;i++){
        for(j=i+1;j<size1;j++){
            if(array1[i]<array1[j]){
                for(k=0;k<size2;k++){
                    if(array1[i]<array2[k]){
                        array3[i]=array1[i];
                    }
                    else{
                        array3[i]=array2[k];
                    }
                }
            }
            else{
                for(k=0;k<size2;k++){
                    if(array1[j]<array2[k]){
                        array3[i]=array1[j];
                    }
                    else{
                        array3[i]=array2[k];
                    }
                }
            }
        }
    }
    printf("The merged sorted array is\n");
    for(l=0;l<size1+size2;l++){
        printf("%d ",array3[l]);
    }
}