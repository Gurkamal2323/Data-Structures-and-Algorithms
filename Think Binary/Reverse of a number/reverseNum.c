#include<stdio.h>

int reverseNum(int n)
{
	static int r=0;
	
	if(n==0)
		return 0;
	
	r=r*10;
	r=r+n%10;
	reverseNum(n/10);
	return r;
}

int main()
{
	int num,result;
	printf("Enter a number\n");
	scanf("%d",&num);
	result=reverseNum(num);
	printf("Reverse of number %d is %d",num,result);
	return 0;
}
