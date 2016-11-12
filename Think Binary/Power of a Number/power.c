#include<stdio.h>
int power(int, int);

int power(int x, int n)
{
	if(n==0)
	{
		return 1;
	}
	
	return x*power(x,n-1);
}

int main()
{
	printf("%d",power(0,0));
	return 0;
}
