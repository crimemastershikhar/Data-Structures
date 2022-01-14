#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node* next;
};

void insertAtTail(Node** head, int data)
{
	Node* newNode = new Node();
	newNode -> data = data;
	newNode -> next = NULL;
	if(*head == NULL)
	{
		*head = newNode;
	}
	else
	{
    newNode->next = *head;
    *head = newNode;
  }

}

int length(Node* head)
{
	int count = 0;
	Node* temp = head;
	while(temp != NULL)
	{
		count++;
		temp = temp -> next;
	}
	return count;
}

Node *rotate(Node **head, int k){
  int n = length(*head);
  k = k%n;
  if(k == 0){
    return *head;
  }
  Node *ptr1 = *head;
  Node *ptr2 = *head;
  for (int i=0; i<k;i++){
    ptr2 = ptr2->next;
  }
  while(ptr2->next != NULL){
    ptr1 = ptr1->next;
    ptr2 = ptr2->next;
  }
  Node *updatehead = ptr1->next;
  ptr1->next = NULL;
  ptr2->next = *head;
  return updatehead;
}

void print(Node* head)
{
	Node* temp = head;
  while(temp -> next != NULL) 
	{
    cout<<temp -> data<<" -> ";
    temp = temp -> next;
  }
	cout<<temp -> data<<" ---> NULL ";
  cout<<endl;
}

int main() 
{
  Node* head = NULL;

	int n;
	cout<<"\nEnter size of ur list "<<endl;
	cin>>n;
	int a[n];
	cout<<"\nEnter elements: "<<endl;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin>>x;
		insertAtTail(&head, x);
	}

	cout<<"\nElements before "<<endl;
	print(head);

	int k;
	cout<<"\nEnter value for k: "<<endl;
	cin>>k;

	Node* newHead = rotate(&head, k);
	cout<<"\nElements in the list after rotating: "<<endl;
	print(newHead);
}