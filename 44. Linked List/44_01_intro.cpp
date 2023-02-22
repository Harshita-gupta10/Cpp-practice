#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(node *&head, int data)
{
    // new node create
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(node *&tail, int data)
{
    // new node create
    node *temp = new node(data);
    tail->next = temp;
    tail = tail->next;
}

void print(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtPosition(node *&head, node* &tail, int position, int d)
{
    //insert at start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    
    node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if(temp->next== NULL)
    {
        insertAtTail (tail, d);
        return;
    }

    node *nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

int main()
{
    // create new node
    node *node1 = new node(10);

    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to node1
    node *head = node1;
    node *tail = node1;
    print(head);

    // insertAtHead(head, 12);
    insertAtTail(tail, 12);
    print(head);

    // insertAtHead(head, 15);
    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(head, tail, 4, 22);
    print(head);

    cout << "Head : " << head->data << endl;
    cout << "Tail : " << tail->data << endl;
    return 0;
}