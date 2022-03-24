#include<stdio.h>
int main()
{
	int num1 , num2  , remainder , quotient;
	
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the second number:");
	scanf("%d",&num2);
	quotient = num2/num1;
	remainder = num2%num1;
	printf("when %d is divided by %d, remainder will be=%d\n",num2,num1,remainder);
    printf("when %d is divided by %d, quotient will be=%d",num2,num1,quotient);
    return 0;
	
	
}