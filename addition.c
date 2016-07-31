#include<stdio.h>

void main () {
	int a, b, sum;

	sum = add(a,b);
	printf("Sum of two numbers = %d", sum);
}

int add (int number1, int number2) {
	return number1 + number2;
}