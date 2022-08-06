#include<stdio.h>
#include<string.h>
void main(void){
    char string[100];
    int length=0,flag=0,i;
    printf("Enter a string: ");
    scanf("%s",string);
    length=strlen(string);
    for(i=0;i<length/2;i++){
        if(string[i]!=string[length-1-i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("The sring is not palindrome");
    }
    else{
        printf("The string is palindrome");
    }
}