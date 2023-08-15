//Implementation of circular queue using array in c++ 

#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100
int front=-1,rear=-1;
int q[MAX_SIZE];

void enqueue(int value)
{
	if((rear + 1) % MAX_SIZE == front)
	cout<<"Queue is full.";

		if((front == -1) && (rear == -1))
		front =rear =0;

		else
		rear = (rear + 1) % MAX_SIZE;

		q[rear]=value;

		cout<<value<<" is inserted into queue";
}

void dequeue()
{
	if((front == -1) && (rear == -1))
	cout<<"Queue is empty.";

		int deq_ele=q[front];
		
		if((front == rear))
		front =rear= -1;

		else
		front = (front + 1) % MAX_SIZE;

		cout<<deq_ele<<" is deleted into queue";	
}

void display()
{
	if((front == -1) && (rear == -1))
	cout<<"Queue is empty.";

	cout<<endl;
	cout<<"Queue elements"<<endl;

        int i = front;
        while (i != rear) 
		{
            cout << q[i] << " ";
            i = (i + 1) % MAX_SIZE;
        }
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