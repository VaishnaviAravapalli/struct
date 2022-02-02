#include<stdio.h>
#define pi 3.14
void main()
	{
float r,area,circumference;
printf("Enter the radius of the circle");
scanf("%f",&r);
area=pi*r*r;
circumference=2*pi*r;
printf("Area of a circle is %f and circumference is %f",area,circumference);
	}
