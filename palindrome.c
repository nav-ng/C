#include<stdio.h>
void main(void){
    char string[100],temp[100];
    int i,j,size=0,flag=0;
    printf("Enter a string: ");
    scanf("%s",string);
    for(i=0;i<100;i++){
        if(string[i]!=NULL){
            size=size+1;
        }
        else{
            break;
        }
       
    }
    for(i=0,j=size-1;i<size/2,j>size/2;i++,j--){
        if(string[i]!=string[j]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("The string you entered is not a palindrome");    
    }
    else{
        printf("The string you entered is a palindrome");
    }
}