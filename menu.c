#include<stdio.h>
void main(void){
    int choice;
    printf("\n 1.Porotta \n 2.Biriyani \n 3.fried rice \n 4.Mandhi \n");
    printf("Select one: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("You have selected Porotta");
            break;
        case 2:
            printf("You have selected Biriyani");
            break;
        case 3:
            printf("You have selected Fried rice");
            break;
        case 4:
            printf("You have selected Mandhi");
            break;
        default:
            printf("Its not available");
    }
}