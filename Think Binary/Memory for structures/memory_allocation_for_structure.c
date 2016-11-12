#include<stdio.h>
struct xyz
{
	char a;
	int b;
};
int main()
{
	struct xyz s;
	printf("%d",sizeof(s));
	return 0;
}
