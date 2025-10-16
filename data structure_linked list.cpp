//  codes linked list

#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head = NULL;

void insertNode(int value);
void display();
void deleteNode(int value);
void insertbeg(int value);
void deletebeg();
void deleteEnd();

int main()
{
    insertNode(5);
    insertNode(4);
    insertNode(2);

    display();

    deleteNode(2);
    display();
    insertbeg(10);
    display();
    deletebeg();
    display();
    deleteEnd();
    display();

    return 0;
}

void insertNode(int value)
{
    node *new_node = new node;
    new_node->data = value;
    new_node->next = NULL;

    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        node *last = head;
        while (last->next != NULL)
            last = last->next;
        last->next = new_node;
    }
}

void display()
{
    node *current = head;
    if (head == NULL)
    {
        cout << "Linked list is empty" << endl;
        return;
    }

    cout << "Linked list elements: ";
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void deleteNode(int value)
{
    node *current = head, *previous = NULL;

    if (current == NULL)
        return;

    if (current->data == value)
    {
        head = current->next;
        delete current;
        return;
    }

    while (current != NULL && current->data != value)
    {
        previous = current;
        current = current->next;
    }

    if (current == NULL)
    {
        cout << "Value not found!" << endl;
        return;
    }

    previous->next = current->next;
    delete current;
}
void insertbeg(int value)
{
    node *Nnode = new node;
    Nnode->data = value;
    Nnode->next = head;
    head = Nnode;
}

void deletebeg()
{
    if (head == NULL)
    {
        cout << "linked list is empty";
    }
    else
    {
        node *first_node;
        first_node = head;
        head = first_node->next;
        delete (first_node);
    }
}

void deleteEnd()
{
    if (head == NULL)
    {
        cout << "linked list is empty";
    }
    else if (head->next == NULL)
    {
        delete (head);
        head = NULL;
    }
    else
    {
        node *ptr = head;
        while (ptr->next->next != NULL)
        {
            ptr = ptr->next;
        }
        delete (ptr->next);
        ptr->next = NULL;
    }
}
