#include<stdio.h>
#include<conio.h>
int main()
{
	float marks,percentage;
	char grade[20];
	printf("enter your marks out of 800:");
	scanf("%f",&marks);
	percentage=marks/8;
	if(percentage>=80.0)
	printf("Distinction");
	else if(percentage>=60.0)
printf("First division");
else if(percentage>=50.0)
printf("second division");
else if (percentage>=40.0)
printf("Third division");
else 
printf("fail");
return 0;
}
