#include<stdio.h>
void TOH(int,char,char,char);

void TOH(int n, char source, char helper, char destination)
{
	if(n==0)
	{
		//no disks
		return;
	}
	TOH(n-1,source,helper,destination);
	printf("Moved disk %d from %c to %c\n",n,source,destination);
	TOH(n-1,helper,destination,source);
}

int main()
{
	int n;
	printf("Enter number of disks\n");
	scanf("%d",&n);
	TOH(n,'A','B','C');
	return 0;
}
