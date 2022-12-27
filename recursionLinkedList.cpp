#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// Creat node using class
class node
{
public:
    int data;
    node *next;
    // Constructor of a Node.....
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
// Reversing the Linked-List
void reverse(node *head, node *curr, node *prev)
{
    if(curr==NULL)
    {
        head=prev;
        return;
    }

    node*foroward=curr->next;
    reverse(head,foroward,curr);
    curr->next=prev;
}
// Reverse link-List Using Recursion
void reverseLinkedList(ndoe *head)
{
    node *curr = head;
    node *prev = NULL;
    reverse(head, curr, prev);
    return head;
}
// Pushing Data in linked list
void push(int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
// Main Programme...
int main()
{

    return 0;
}