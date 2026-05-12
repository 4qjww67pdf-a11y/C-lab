#include<stdio.h>
#include<conio.h>
int main()
{
int num,i;
long fact=1;
printf("Enter a number whose factorial is to be calculated: ");
scanf("%d",&num);
if(num<0)
printf("\n We cannot calculate the factorial of number which is less than zero");
else
{
for(i=1;i<=num;i++)
{
fact=fact*i;
}
printf("\nThe factorial is : %ld",fact);
}
return 0;
}
