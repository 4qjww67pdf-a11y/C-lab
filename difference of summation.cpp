/*program to enter four integers and calculate the difference of the summation of first two and last two*/
#include<stdio.h>
int main()
{
int a,b,c,d,e;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
printf("Enter four numbers:");
scanf("%d%d%d%d",&a,&b,&c,&d);
e=(a+b)-(c+d);
printf("The required answer is %d",e);
return 0;
}

