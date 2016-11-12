#include<stdio.h>
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
	printf("Size of structure s1 is %d\nSize of structure s2 is %d",sizeof(a),sizeof(b)); //s1 - 16 and s2 - 20
	return 0;
}
