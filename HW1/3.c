#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		//for spaces
			for(k=5;k>=i;k--)
			{
				printf(" ");
			}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=i;j>=2;j--)
		{
			printf("%d",j-1);
		}
		printf("\n");
	}
	return 0;
}
