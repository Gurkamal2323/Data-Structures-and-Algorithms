#include<stdio.h>
#define MAX 100
//declaration of stack and expression character arrays
char stk[MAX], exp[100];
//initially empty stack
int top = -1;

//to push element to stack
void push(char c)
{
	top++;
	stk[top]=c;
}

//to remove the element from stack
void pop()
{
	top--;
}

int main()
{
	int i;
	printf("Enter the expression\n");
	gets(exp);	//to read the whole expression
	
	//check for symbols (, ), {, }, [ and [ from traversing the whole expression
	for(i=0;exp[i]!='\0';i++)
	{
		//if we found (, { or [ push to stack
		if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
		{
			push(exp[i]);
		}
		//if we found ), } or ] then we will compare them with (, { or [
		//if we match ( for ) then we have to pop the element from the stack
		//the element poped will be ( because it is the one that we have inserted
		else
		{
			//checking ( ) pair
			if(exp[i]==')')
			{
				if(stk[top]=='(')
				{
					pop(); //if there is a pair
				}
				else
				{
					printf("Unbalanced Expression");
					break;
				}
			}
		
			//checking { } pair
			else if(exp[i]=='}')
			{
				if(stk[top]=='{')
				{
					pop();
				}
				else
				{
					printf("Unbalanced Expression");
					break;
				}
			}
			
			//checking [ ] pair
			else if(exp[i]==']')
			{
				if(stk[top]=='[')
				{
					pop();
				}
				else
				{
					printf("Unbalanced Expression");
					break;
				}
			}
		}
	}
		
		if(top==-1)
		{
			printf("Balanced Expression");
		}
		else
		{
			printf("Unbalanced Expression");
		}
	return 0;
}
