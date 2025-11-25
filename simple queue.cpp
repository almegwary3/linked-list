#include <iostream>
using namespace std;
#define SIZE 5
int queue[SIZE];
int front = -1;
int rear = -1;
void enqueue(int value);
void dqueue();
int peak();
void display();

int main()
{
    enqueue(5);
            enqueue(3);
                enqueue(4);
                    enqueue(6);
                        dqueue();
                            display();
                                dqueue();
                                    cout
        << "peak" << peak()<<endl;
    return 0;
}

void enqueue(int value)
{
    if (rear != SIZE - 1)
    {
        if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            queue[rear] = value;
        }
        else
        {
            rear++;
            queue[rear] = value;
        }
    }
    else
    {
        cout << "queue is full" << endl;
    }
}

void dqueue()
{
    if (front != -1 && rear != -1 && front <= rear)
    {
        front++;
    }
    else
    {
        cout << "queue is empty" << endl;
    }
}

int peak()
{
    if (front != -1 && rear != -1 && front <= rear)
    {
        return queue[front];
    }
    else
    {
        cout << "queue is empty" << endl;
        return -1;
    }
}

void display()
{
    if (front != -1 && rear != -1 && front <= rear)
    {
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << endl;
        }
    }
    else
    {
        cout << "queue is empty" << endl;
    }
};