#include<stdio.h>
int movesTOH(int,char,char,char);

int movesTOH(int n, char source, char helper, char destination)
{
	if(n==0)
	{
		return 0;
	}
	int moves=0;
	moves+=movesTOH(n-1,source,helper,destination);
	moves+=1;
	printf("Moved %d disk from %c to %c\n",n,source,destination);
	moves+=movesTOH(n-1,helper,destination,source);
	
	return moves;
}

int main()
{
	int n;
	printf("Enter number of disks\n");
	scanf("%d",&n);
	printf("\nNumber of moves required - %d",movesTOH(n,'A','B','C'));
	return 0;
}
