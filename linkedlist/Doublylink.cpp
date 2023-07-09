#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};
void printDoubly(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void insertNodeAthead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertAtTail(Node *tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    temp = tail;
}
void insertAtPos(Node *head, Node *tail, int pos, int d)
{
    if (pos == 1)
    {
        insertNodeAthead(head, d);
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
    }
    Node *nodetoinset = new Node(d);
    nodetoinset->next = temp->next;
    temp->next->prev = nodetoinset;
    temp->next = nodetoinset;
    nodetoinset->prev = temp;
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    printDoubly(head);
    // cout << "Length of DoublyLinkedList : " << getLength(head) << endl;
    insertNodeAthead(head, 44);
    insertNodeAthead(head, 66);
    insertAtTail(tail, 9); // Add at the tail of the linkedlist
    insertAtPos(head, tail, 2, 111);
    printDoubly(head);
    return 0;
}