#include<stdio.h>
union u
{
	char name[32];
	float salary;
	int workerNo;
};
struct s
{
	char name[32];
	float salary;
	int workerNo;
};
int main()
{
	union u a;
	struct s b;
	printf("Size of union is %d\nSize of structure is %d",sizeof(a),sizeof(b));
	return 0;
}
