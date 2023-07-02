#include<stdio.h>
void main(void){
    char name[50];
    printf("Enter a name: ");
    gets(name);
    printf("Entered name is %s",name);
}