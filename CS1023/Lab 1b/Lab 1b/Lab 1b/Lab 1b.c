#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define PI=3.1415
int main()
{
	//This is Part A for calculating the area of a triangle. Base and Height must be put in in order for an answer to appear.//
	int base,height;
	float area;
	printf("Area of triangle\n Enter value of base=");
	scanf("%d",&base);
	printf("Enter value of height=");
	scanf("%d",&height);
	area=0.5*base*height;
	printf("Area of triangle =%f",area);

	getch();

	//This is Part B for calculating area of a part of a circle.//
	int degrees, radius;
	float area;
	printf("Area of sector of circle\n Enter value of degrees=");
	scanf("%d",&degrees);
	printf("Enter value of radius=");
	scanf("%d",&radius);
	area=(radius^2)*(((degrees/180)*PI)/2);
	printf("Area of triangle =%f",area);

	getch();

	//This is Part C for calculating the area and volume of a circle and sphere.//

	int radius;
	float area,volume;
	printf("Enter value of radius=");
	scanf("%d",&radius);
	area=PI*radius*radius
	volume=4/3*PI*radius*radius*radius
	printf("Area of circle =%f",area);
	printf("Volume of sphere =%f",volume);

	getch();
	return 0;
}