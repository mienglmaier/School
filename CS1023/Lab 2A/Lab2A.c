#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{

	float rate =.05, uncut=100,year=0;
	int forest = uncut;
	
	for(year=1;year<=20;year++)
	{
		forest = rate*100+uncut;
		printf("After %i year, uncut forest is: %u acres\n",rate,uncut);

	}


	
	_getch();
		return 0;
}