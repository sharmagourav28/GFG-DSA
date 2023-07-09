#include <iostream>
using namespace std;
//  Insert at anypostion  of the linkedlist :

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void InsertAtend(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void printLL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertpos(Node *&head, int pos, int d)
{
    Node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    Node *nodetoinset = new Node(d);
    nodetoinset->next = temp->next;
    temp->next = nodetoinset;
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    printLL(head);
    InsertAtend(tail, 12);
    InsertAtend(tail, 55);
    insertpos(head, 3, 22);
    printLL(head);
}