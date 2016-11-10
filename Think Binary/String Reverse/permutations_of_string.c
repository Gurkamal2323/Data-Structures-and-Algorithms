#include<stdio.h>
void permBin(int *, int, int);

void permBin(int *a, int i, int n)
{
	if(i==n)
	{
		//print array
		for(i=0;i<4;i++)
		{
			printf("%d",a[i]);
		}
		printf("\n");
		return;
	}
	//ascending
	a[i]=0;
	permBin(a,i+1,4);
	a[i]=1;
	permBin(a,i+1,4);
}

int main()
{
	int a[]={1,0,0,1},i;
	permBin(a,0,sizeof(a));
	return 0;
}
