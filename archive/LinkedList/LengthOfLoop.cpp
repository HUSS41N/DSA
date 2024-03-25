#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }
};

void insertion(Node* &head,int val){
    Node* n = new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp =temp->next;
    }
}

void makeACycle(Node* head){
    Node* start;
    Node* temp = head;
    int counter = 1;
    while(temp->next!=NULL){
        if(counter==2){
            start = temp;
        }
        counter++;
        temp = temp->next;
    }
    temp->next = start;
}

int lengthOfCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    Node* startOfCycle = NULL;
    int counter = 0;
    while(fast->next !=  NULL and fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            slow = head;
            while(slow!=fast){
                slow = slow->next;
                fast = fast->next;
            }
            startOfCycle = slow;
            break;
        }
    }
    if(startOfCycle == NULL){
        return 0;
    }
    Node* temp = startOfCycle;
    while(temp->next != startOfCycle){
        counter++;
        temp = temp->next;
    }
    return counter + 1;
}
int main(){
    Node* head = NULL;
    insertion(head,1);
    insertion(head,2);
    insertion(head,3);
    insertion(head,4);
    insertion(head,5);
    makeACycle(head);
    cout<<lengthOfCycle(head);
    // display(head);
}
