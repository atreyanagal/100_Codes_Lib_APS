//SSL in C++

#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
            int data;
            Node* next;

            Node(int data)
            {
                this -> data =data;
                this -> next =NULL;
            }

            ~Node()
            {
                int value=this->data;

                if(this->next!=NULL)
                {
                    delete next;
                    this->next=NULL;
                }
                cout<<"Memory is free for the node with data: "<<value<<endl;
            }
};

void insertAtHead(Node* &head,int data)
{
    Node *temp=new Node(data);

    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int data)
{
    Node *temp=new Node(data);

    tail->next=temp;
    tail=temp;
}

void insertAtPos(Node* &tail,Node* &head,int pos,int data)
{
    if(pos==1)
    {
        insertAtHead(head,data);
        return;
    }

    Node* temp=head;
    
    if(temp->next==NULL)
    {
        insertAtTail(tail,data);
    }

    int count=1;

    while(count<pos-1)
    {
        temp=temp->next;
        count++;
    }

    Node* list=new Node(data);

    list->next=temp->next;
    temp->next=list;

}

void deleteAtPos(Node* &head,int pos)
{
    if(pos==1)
    {
        Node* temp=head;
        head=head->next;

        temp->next=NULL;
        delete temp;
    }

    else
    {
        Node* curr=head;
        Node* prev=NULL;

        int count=1;

        while(count<pos)
        {
            prev=curr;
            curr=curr->next;
            count++;
        }

        prev->next=curr->next;

        curr->next=NULL;
        delete curr;
    }
}

void print(Node* &head)
{
    Node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    Node* node1=new Node(12);

    Node* head=node1;
    Node* tail=node1;

    insertAtTail(tail,14);
    insertAtHead(head,10);
    insertAtPos(tail,head,2,11);
    insertAtPos(tail,head,1,9);
    insertAtPos(tail,head,1,15);

    print(head);
    cout<<endl;

    deleteAtPos(head,3);
    deleteAtPos(head,1);
    deleteAtPos(head,4);

    print(head);
    
    return 0;
}