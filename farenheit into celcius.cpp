/*program to convert the celsius data to farenheit and vice versa*/
#include<stdio.h>
int main()
{
float celsius,fahrenheit;
char a;
printf(" Enter 'f' to  convert fahrenheit data to celsius and \n 'c' to convert from celsius data to fahrenheit : ");
scanf("%c",&a);
if(a=='f')
{
printf("\n\n Enter the fahrenheit data: ");
scanf("%f",&fahrenheit);
celsius=(fahrenheit-32.0)/1.8;
printf("\n\n The celsius value of %f degree fahrenheit is : %f",fahrenheit,celsius);
}
else if(a=='c')
{
printf("\n\n Enter the celsius data: ");
scanf("%f",&celsius);
fahrenheit=1.8*celsius+32.0;
printf("\n\n The fahrenheit value of %f degree centigrade is : %f",celsius,fahrenheit);
}
return 0;
}

