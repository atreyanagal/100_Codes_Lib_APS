//Implementation of stack using array in c++ 

#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100
int top=-1;
int _stack[MAX_SIZE];	

void push(int value)
{
	if(top == MAX_SIZE-1)
	cout<<"Stack is full.";

	else
	{
		_stack[++top]=value;
		cout<<value<<" inserted into stack";
	}
	
}

void pop()
{
	if(top == -1)
	cout<<"Stack is empty.";

	else
	{
		int pop_val=_stack[top--];
		cout<<pop_val<<" deleted from stack";
	}
	
}

void display()
{
	if(top == -1)
	cout<<"Stack is empty.";

	else
	{
		cout<<endl;
		cout<<"Elements in stack"<<endl;
		
		for(int i=top;i>=0;i--)
		cout<<_stack[i]<<" ";
	}
	
}

int main()
{	
	push(10);
	push(20);
	push(30);
	pop();
	push(40);
	push(50);
	pop();

	display();

    return 0;
}