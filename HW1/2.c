#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=69;i>=65;i--)
	{
		for(j=69;j>=i;j--)
		{
			printf("%c",j);
			//for spaces
			for(k=69;k>=j;k--)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
