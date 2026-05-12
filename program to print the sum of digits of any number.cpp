#include<stdio.h>
int main()
{
int n, sum=0, rem;
printf("Enter a number: ");
scanf("%d", &n);
while(n>0)	
{
	rem = n%10; //taking the last digit of number
sum += rem;
n /= 10; //skipping last digit
}
printf("Sum of digits = %d", sum);
return 0;
}

