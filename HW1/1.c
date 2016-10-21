#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
			//for spaces
			for(k=1;k<=j;k++)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
