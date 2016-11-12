#include<stdio.h>
#include<string>
#define MAX 100000
void reverseString(char *, int);

void reverseString(char *str, int len)
{
	if(len==0)
	{
		return;
	}
	reverseString(str+1,len-2);
	char temp;
	temp=str[0];
	str[0]=str[len-1];
	str[len-1]=temp;
}

int main()
{
	char *str;
	printf("Enter the word\n");
	scanf("%s",str);
	reverseString(str,len);
	return 0;
}
