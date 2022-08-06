#include <stdio.h>
void main(void) {
	int number1,number2,choice=0,result=0;
	printf("Enter two numbers");
	scanf("%d%d",&number1,&number2);
	printf("1 for Addition \n 2 for Subtraction \n 3 for Multiplication \n 4 for Division \n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	if(choice==1){
		result=number1+number2;
        printf("Result is %d",result);
	}
	else if(choice==2){
		result=number1-number2;
        printf("Result is %d",result);
	}
	else if(choice==3){
		result=number1*number2;
        printf("Result is %d",result);
	}
	else if(choice==4){
		result=number1/number2;
        printf("Result is %d",result);
	}
	else{
		printf("Invalid option");
	}
}
