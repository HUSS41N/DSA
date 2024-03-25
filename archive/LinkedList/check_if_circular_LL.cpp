// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct Node
{
	int data;
	struct Node* next;
};


 // } Driver Code Ends
//User function Template for C

/* Should return true if linked list is circular, else false */
bool isCircular(struct Node *head){
    //code here
    struct Node* temp = head;
    while(temp->next != head || temp != NULL){
        temp = temp->next;
        if(temp == NULL){
            return false;
        }
        if(temp->next == head){
            return true;
        }
    }
}

// { Driver Code Starts.

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n, k;
		scanf("%d", &n);
		scanf("%d", &k);
		int first;
		scanf("%d", &first);
		struct Node *head;
		head = (struct Node *) malloc(sizeof(struct Node));
		head->data = first;
		head->next = NULL;
		struct Node *tail = head;

		for (int i = 1; i < n; ++i)
		{
			int data;
			scanf("%d", &data);
			struct Node *temp;
			temp = (struct Node *) malloc(sizeof(struct Node));
			temp->data = data;
			temp->next = NULL;
			tail->next = temp;
			tail = tail->next;
		}

        if (k==1 && n >= 1)
            tail->next = head;
		
		printf("%d \n", isCircular(head));
	}
	return 0;
}  // } Driver Code Ends
