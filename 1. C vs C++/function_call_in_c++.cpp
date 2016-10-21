#include<iostream>
using namespace std;
int main()
{
	func(); //func() is called before declaration
}

int func()
{
	cout<<"Hello";
	return 0;
}
