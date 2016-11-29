#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main()
{
	float km,mi;

	printf("Please enter the number of km\n");
	scanf("%f",&km);
	printf("The input is %f kilometers.\n", km);
	
	mi = km/1.6093440;
	
	printf("%f kilometers are equal to  %f miles",km,mi);
	
	_getch();
	return 0;
}