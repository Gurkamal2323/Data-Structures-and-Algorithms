#include<stdio.h>
int main()
{
	func(); //func() is called before declaration
}

int func()
{
	printf("Hello");
	return 0;
}
