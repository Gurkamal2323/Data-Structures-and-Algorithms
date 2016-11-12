#include<stdio.h>
union u
{
	char name[32];
	float salary;
	int workerNo;
};
int main()
{
	union u a;
	printf("Size of union is %d",sizeof(a));//size is equal to the largest element in the structure
	return 0;
}
