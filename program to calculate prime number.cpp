#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,c;
printf("Enter a number:");
scanf("%d",&num);
i=2, c=0;
while(i<(num-1))
{
if(num%i==0)
c++;
i++;
}
if(c==0)
printf("the number is prime");
else
printf("The number is not prime");
return 0;
}
