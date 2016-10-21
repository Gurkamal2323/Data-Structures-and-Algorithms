//array implementation of stack
#include<stdio.h>
#define MAX 10
int A[MAX];
int top=-1;

void push(int x) //to push the element at the top of the stack
{
	//check overflow
	if(top == (MAX - 1))
	{
		printf("Overflow : Stack is full\n");
	}
	top++;
	A[top] = x;
}

void pop() //to remove element from stack
{
	//check underflow
	if(top == -1)
	{
		printf("Underflow : Stack is empty\n");
		return;
	}
	top--;
}

int elementAtTop() //return top element of the stack
{
	return A[top];
}

void size() //to display the size of the stack
{
	int i,count=0;
	for(i=0;i<=top;i++)
	{
		count++;
	}
	printf("Size is : %d",count);
	printf("\n");
}

void display() //to display stack elements
{
	int i;
	printf("Stack : ");
	for(i=0;i<=top;i++)
	{
		printf("%d",A[i]);
		printf(" ");
	}
	printf("\n");
}

int main()
{
	push(2);
	display();
	size();
	push(5);
	display();
	size();
	push(10);
	display();
	size();
	pop();
	display();
	size();
	pop();
	display();
	size();
	pop();
	size();
	pop();
	size();
	return 0;
}
