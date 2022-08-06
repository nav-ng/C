#include<stdio.h>
void main(void){
    int n,a[100],i,key,flag=0,index;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("Enter %d numbers\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want to search: ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(key==a[i]){
            flag=1;
            index=i+1;
            break;
        }
    }
    if(flag==1){
        printf("The number %d is found at index position %d",key,index);
    }
    else{
        printf("The number you are searching is not found");
    }
}




