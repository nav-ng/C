#include <stdio.h>
void main(void) {
	int number1,number2;
	printf("Enter two numbers:\n");
	scanf("%d%d",&number1,&number2);
	if(number1>number2){
		printf("Greatest number is %d",number1);
	}
	else
		printf("Greatest number is %d",number2);
}
