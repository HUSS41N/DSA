#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int value){
            data = value;
            next = NULL;
        }
};

int lengthOfList(node* &head){
    int counter  = 0;
    node* temp = head;
    while(temp!=NULL){
        counter++;
        temp = temp->next;
    }
    return counter;
}

int intersection(node* &head1,node* &head2){
    // get length of both lists
    int l1 = lengthOfList(head1);
    int l2 = lengthOfList(head2);
    // difference of length btw both lists
    int d = 0;
    // two interating pointers
    node* ptr1; //it will store the value of larger list head
    node* ptr2; 
    // check which is bigger list and get the differnce;
    if(l1>l2){
        d = l1-l2;
        ptr1 = head1;
        ptr2 = head2;
    } else {
        d = l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    // move the other larger list pointer d times to make them equal distance from intersection if there's one
    while(d){
        ptr1 = ptr1->next;
        // while moving if thres is a null we know that theres is no intersection
        if(ptr1!=NULL){
            return -1;
        }
        d--;
    }
    // move both the pointers one step and check if there's is a intersection;
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}
void insertAtEnd(node* &head,int value){
    node* n = new node(value);
    if(head==NULL){
        n->next = NULL;
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head1 = NULL;
    insertAtEnd(head1,1);
    insertAtEnd(head1,2);
    insertAtEnd(head1,3);
    insertAtEnd(head1,4);
    insertAtEnd(head1,5);
    insertAtEnd(head1,6);
    node* head2 = NULL;
    insertAtEnd(head2,1);
    insertAtEnd(head2,2);
    insertAtEnd(head2,3);
    insertAtEnd(head2,4);
    insertAtEnd(head2,5);
    insertAtEnd(head2,6);
    cout<<intersection(head1,head2)<<endl;
    display(head1);
    display(head2);
}
