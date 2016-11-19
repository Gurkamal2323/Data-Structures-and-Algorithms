/*
You are asked to calculate factorials of some small positive integers.
Input

An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1<=n<=100.
Output

For each integer n given at input, display a line with the value of n!
Example
Sample input:

4
1
2
5
3

Sample output:

1
2
120
6


*/
#include<stdio.h>

#define MAX 500

int multiply(int x,int res[],int res_size);

int factorial(int n)
{
	int res[MAX],i,x;
	
	res[0]=1;
	int res_size=1;
	
	for(x=2;x<=n;x++)
	{
		res_size=multiply(x,res,res_size);
	}
	
	for(i=res_size-1;i>=0;i--)
	{
		printf("%d",res[i]);
	}
	printf("\n");
	
	return 0;
}

int multiply(int x,int res[],int res_size)
{
	int carry=0;
	int i;
	for(i=0;i<=res_size-1;i++)
	{
		int prod=res[i]*x+carry;
		res[i]=prod%10;
		carry=prod/10;
	}
	
	while(carry)
	{
		res[res_size]=carry%10;
		carry=carry/10;
		res_size++;
	}
	
	return res_size;
}

int main()
{
	int n,a[MAX];
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		factorial(a[i]);
	}
	return 0;
}
