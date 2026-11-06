#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void Insart_at_tail(Node *&head, Node *&tail, int value)
{
    Node *new_Node = new Node(value);
    if (head == NULL)
    {
        head = new_Node;
        tail = new_Node;
        return;
    }
    tail->next = new_Node;
    tail = new_Node;
}
void Reverse_list(Node* tamp, Node* &head,Node* &tail)
{
    if (tamp->next == NULL)
    {
        head = tamp;
        return;
    }

    Reverse_list(tamp->next, head, tail);
    tamp->next->next = tamp;
    tamp->next = NULL;
    tail = tamp;
   
}
void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        Insart_at_tail(head, tail, value);
    }
    Reverse_list(head,head,tail);
    print_list(head);
    
    return 0;
}