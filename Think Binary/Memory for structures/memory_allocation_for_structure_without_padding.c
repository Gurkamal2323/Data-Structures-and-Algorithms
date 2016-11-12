#include<stdio.h>
#pragma pack(1);
struct s1
{
	int id1;
	int id2;
	char name;
	char c;
	float percentage;
};

struct s2
{
	int id1;
	char name;
	int id2;
	char c;
	float percentage;
};
int main()
{
	struct s1 a;
	struct s2 b;
	printf("Size of structure s1 is %d\nSize of structure s2 is %d",sizeof(a),sizeof(b));//s1 - 14 and s2 - 14
	return 0;
}
