#include<stdio.h>

int sum(int n)
{
	if(n!=0)
		return (n%10 + sum(n/10));
	else
		return 0;
}

int main()
{
	int num,result;
	printf("Enter a number\n");
	scanf("%d",&num);
	result=sum(num);
	printf("Sum of digits of the number %d is %d",num,result);
	return 0;
}
