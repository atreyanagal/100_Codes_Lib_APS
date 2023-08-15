//Implementation of queue using array in c++ 

#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100
int front=-1,rear=-1;
int q[MAX_SIZE];

void enqueue(int value)
{
	if(rear == MAX_SIZE-1)
	cout<<"Queue is full.";

		if((front == -1) && (rear == -1))
		front =rear =0;

		else
		rear++;

		q[rear]=value;

		cout<<value<<" is inserted into queue";
}

void dequeue()
{
	if((front == -1) && (rear == -1))
	cout<<"Queue is empty.";

		int deq_ele=q[front];
		
		if(front ==rear)
		front =rear= -1;

		else
		front++;

		cout<<deq_ele<<" is deleted into queue";	
}

void display()
{
	if((front == -1) && (rear == -1))
	cout<<"Queue is empty.";

	cout<<endl;
	cout<<"Queue elements"<<endl;

	for(int i=front;i<=rear;i++)
	cout<<q[i]<<" ";
}

void _front()
{
	cout<<q[front]<<endl;
}

void _rear()
{
	cout<<q[rear]<<endl;
}

int main()
{	
	enqueue(10);
	enqueue(20);
	enqueue(30);
	dequeue();
	enqueue(40);
	enqueue(50);
	dequeue();
	_front();
	_rear();

	display();

    return 0;
}