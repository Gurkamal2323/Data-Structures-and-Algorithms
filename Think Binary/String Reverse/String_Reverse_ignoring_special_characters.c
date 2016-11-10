#include<stdio.h>
void reverseStringWOSpecial(char *, int);
bool isSpecial(char);

bool isSpecial(char c)
{
	//check for special character
}

void reverseStringWOSpecial(char *a, int n)
{
	if(isSpecial(str[0]))
	{
		//when special character is at index 0
		reverseStringWOSpecial(a+1,n-1);
		return;
	}
	if(isSpecial(str[n-1]))
	{
		//when special character is at last index
		reverseStringWOSpecial(a,n-1);
		return;
	}
	//when the special characters are inbetween the first and last characters
	char temp;
	temp=a[0];
	a[0]=a[n-1];
	a[n-1]=temp;
	reverseStringWOSpecial(a+1,n-2);
}

int main()
{
	char a[]={$,a,$,#,b,_,c};
	reverseStringWOSpecial(a,sizeof(a));
	return 0;
}
