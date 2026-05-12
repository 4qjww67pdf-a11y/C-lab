/*program to perform arithmetic calculations on integers*/
#include<stdio.h>
int main()
{
	char op;
	int num1,num2,result;
	printf("\n\n simple arithematic calculator");
	start:
		printf("\n\n enter a number operator and another number: ");
		scanf("%d%c%d",&num1,&op,&num2);
		printf("\n");
		switch(op)
		{
			case '+':
				printf("addition");
				result=num1+num2;
				break;
					case '-':
				printf("subtraction");
				result=num1-num2;
				break;
					case '*':
				printf("multiplication");
				result=num1*num2;
				break;
					case '/':
				printf("division");
				result=num1/num2;
				break;
					case '%':
				printf("modulus");
				result=num1%num2;
				break;
				
				default:
				printf("\n\n enter valid operator:+or-or*or/or%");
				goto start;
		}
	
			printf("\nresult=%d",result);
			return 0;
	
}

