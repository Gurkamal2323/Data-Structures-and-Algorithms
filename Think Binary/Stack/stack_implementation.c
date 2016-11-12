#include<stdio.h>
#define MAX 100
int top = -1;
int size=MAX;
int stack[MAX];

//when top becomes equal to size of the stack
int isFull()
{
	if(top==size)
		return 1;
	else
		return 0;	
}

//when top is equal to -1
int isEmpty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}

//push the data at the top of the stack
//increment the top and the insert the data the stack top
int push(int data)
{
	if(!isFull())
	{
		top=top+1;
		stack[top]=data;
	}
	else
	{
		printf("Overflow");
		return 0;
	}
}

//return the data at the top of the stack
int peek()
{
	return stack[top];
}

//pop the element at the top of the stack
//and then decrement the top to pop the next element in the stack
int pop()
{
	int data;
	if(!isEmpty())
	{
		data=stack[top];
		top--;
		return data;
	}
	else
	{
		printf("Underflow");
		return 0;
	}
}

int main()
{
	push(3);
	push(5);
	push(9);
	push(1);
	push(12);
	push(15);
	printf("Data at the top of the stack is %d\n",peek());
	printf("Elements of stack are\n");
	while(!isEmpty())
	{
		int data;
		printf("%d\n",pop());
	}
	printf("Stack full - %s\n",isFull()?"true":"false");
	printf("Stack empty - %s",isEmpty()?"true":"false");
	return 0;
}
