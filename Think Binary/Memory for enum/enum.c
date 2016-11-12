#include<Stdio.h>
enum e
{
	hello,
	bye
};
int main()
{
	enum e a;
	printf("Size of enum is %d",sizeof(a));
	return 0;
}
