/*program to find the area and circumference of circle*/
#include<stdio.h>
#define PI 3.1415
int main()
{
float radius,area,circumference;
printf(" Enter the radius of a cirlce:");
scanf("%f",&radius);
area=PI*radius*radius;
circumference=2*PI*radius;
printf("\n\n Area of the circle with radius %.2f is : %.2f",radius,area);
printf("\n\n circumference of the same circle is : %.2f",circumference);
return 0;
}
