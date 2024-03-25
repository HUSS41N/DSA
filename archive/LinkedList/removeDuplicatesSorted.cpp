#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

Node* removeDuplicates(Node* &head){
    Node* temp = head;
    if(head==NULL){
            return NULL;
    }
    if(head->next == NULL){
            return head;
    }
    while(temp->next!=NULL){
        if(temp->data == temp->next->data){
            temp->next = temp->next->next;
        } else {
            temp = temp->next;
        }
    }
    return head;
}

int main()
{
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    // insertAtTail(head, 3);
    // insertAtTail(head, 3);
    printList(head);
    head = removeDuplicates(head);
    printList(head);
}
