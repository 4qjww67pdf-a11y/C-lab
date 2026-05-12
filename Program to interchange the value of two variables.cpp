/*program to interchange the value of two variables*/
#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value for b: ");
scanf("%d",&b);
printf("\nBefore swapping: \n a=%d \n b=%d\n",a ,b);
temp =a;
a=b;
b=temp;
printf("\nAfter swapping: \n a=%d \n b=%d\n",a ,b);
return 0;	
}
