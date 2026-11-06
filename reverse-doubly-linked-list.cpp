#include <bits/stdc++.h>
using namespace std;
// Node class //
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
// Insert at tail function //
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
    new_Node->prev = tail;
    tail = new_Node;
}
// Reverse function //
void Reverse_list(Node *tamp, Node *&head, Node *&tail)
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
// Double reverse function //
void double_reverse(Node *&head, Node *&tail)
{
    for (Node *i = head, *j = tail; i!= j && i->prev != j ; i = i->next, j = j->prev)
    {
        swap(i->val, j->val);
    }
}
// print function //
void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
// Main function //
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
    // Reverse_list(head, head, tail);
    double_reverse(head, tail);
    print_list(head);

    return 0;
}