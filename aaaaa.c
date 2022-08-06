#include<stdio.h>
int main() {
char name[100];
 printf("Enter a name");
 scanf("%s",&name);
 printf("The size of name you entered is:");
 printf("%lu",sizeof(name));
}