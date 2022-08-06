#include <stdio.h>
void main(void){
	int number1,number2,number3;
	printf("enter 3 numbers\n");
	scanf("%d%d%d",&number1,&number2,&number3);
	if(number1>number2){
	        if(number1>number3)
	                printf("Greatest number is %d",number1);
	        else
	                printf("Greatest number is %d",number2);
        }
    else if(number2>number3){
	        printf("Greatest number is %d",number2);}
	        else
	                printf("Greatest number is %d",number3);
}