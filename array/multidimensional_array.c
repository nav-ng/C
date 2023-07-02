#include<stdio.h>
void main(void){
    int i,j,n,m,a[100][100];
    printf("Enter row size: ");
    scanf("%d",&n);
    printf("Enter column size: ");
    scanf("%d",&m);
    printf("Input numbers into array\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The multidimensional array is\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}