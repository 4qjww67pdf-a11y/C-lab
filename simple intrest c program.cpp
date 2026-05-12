
/*Program to calculate simple interest*/
#include<stdio.h>
int  main()
{
int P,T,R,I;
printf("Enter Principle, Interest rate and Time:");
scanf("%d%d%d",&P,&R,&T);
I=(P*T*R)/100;
printf("The interest is %d",I);
return 0;
}

