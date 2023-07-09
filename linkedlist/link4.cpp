#include <iostream>
using namespace std;
//  Insert at anypostion  of the linkedlist :
//  deletion at linkedlist
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
    // ~Node()
    // {
    //     int value = this->data;
    //     if (this->next != NULL)
    //     {
    //         delete next;
    //         this->next = NULL;
    //     }
    // }
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

void deleteNode(int postion, Node *&head)
{
    if (postion == 1)
    {
        // delete at starting
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // delete at mid and last
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < postion)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
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
    deleteNode(3, head);
    printLL(head);
}