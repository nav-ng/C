#include <stdio.h>
void main(void) {
	float num1,num2,num3,average;
	printf("Enter three numbers:\n");
	scanf("%f%f%f",&num1,&num2,&num3);
	average=(num1+num2+num3)/3;
	printf("Result is:%f",average);
}