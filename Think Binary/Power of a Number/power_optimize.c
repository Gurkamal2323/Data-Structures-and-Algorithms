#include<stdio.h>
int power(int,int);

int power(int x, int n)
{
	if(n==0)
	return 1;
	//here complexity is logn
	int a=power(x,n/2);
	if(n%2==0)
	return a*a;
	
	return a*a*x;
}

int main()
{
	int x,n;
	printf("Enter number and its power\n");
	scanf("%d%d",&x,&n);
	printf("%d raise to power %d is %d",x,n,power(x,n));
	return 0;
}
