#include<iostream>
using namespace std;
struct node
{
   int data; 
   Node* next; 
}
Node* front=NULL;
Node* rear=NULL;
void enqueue(int value);
void dequeue();

int main()
{
    return;
}

void enqueue()
{
     Node* new_node=new node;
     new_node->data=value;
     new_node->next=NULL;
     if(front==NULL)
     {
        front=rear=new_node;
     }
     else{
        rear->next=new_node;
        rear=new_node;
     }
}

void dequeue()
{
    if(rear==NULL)
    {
        cout<<"queue is empty"<<endl;
    }
    else if(front==rear)
    {
        Node* ptr=front;
        front=rear=NULL;
        delete(ptr);
    }
    else{
        Node* ptr=front;
        front=front->next;
        delete(ptr);

    }
}
