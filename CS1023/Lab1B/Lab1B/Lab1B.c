// Lab 1A Problem 2
// Name: Michael Englmaier
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
// Display A and B and then swap the values
int main()
{
	int A,B;

	printf("Please enter a number for A and B.\n");
	scanf("%i",&A);
	scanf("%i",&B);
	printf("The input is %i for A.\n", A);
	printf("The input is %i for B.\n", B);
	

	
	printf("%i = A and %i = B",A,B);
	
	_getch();
	return 0;
}