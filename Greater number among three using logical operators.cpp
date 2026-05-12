#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("\n a is greater");
else if(b>a && b>c)
printf("\n b is greater");
else if(c>a && c>a)
printf("\n c is greater");
return 0;
}

