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

void swapNodes(Node** head, int k)
{
	int n = length(*head);

	if(k > n)
	{
		cout<<"k is greater than the length..! Thus Invalid "<<endl;
		return;
	}
	if(2 * k - 1 == n)
	{
		return;
	}

	Node* x = *head;
	Node* xprev = NULL;
	for(int i = 1; i < k; i++)
	{
		xprev = x;
		x = x -> next;
	}

	Node* y = *head;
	Node* yprev = NULL;
	for(int i = 1; i < (n - k + 1); i++)
	{
		yprev = y;
		y = y -> next;
	}

	if(xprev != NULL)
	{
		xprev -> next = y;
	}
	if(yprev != NULL)
	{
		yprev -> next = x;
	}

	Node* temp = x -> next;
	x -> next = y -> next;
	y -> next = temp;

	if(k == n)
	{
		*head = x;
	}
	if(k == 1)
	{
		*head = y;
	}
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
	cout<<"\nEnter size of the list: "<<endl;
	cin>>n;
	int a[n];
	cout<<"\nEnter elements: "<<endl;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin>>x;
		insertAtTail(&head, x);
	}

	cout<<"\nOriginal elements in list: "<<endl;
	print(head);

	int k;
	cout<<"\nEnter value for k: "<<endl;
	cin>>k;

	swapNodes(&head, k);
	cout<<"\nElements in the list after swapping: "<<endl;
	print(head);

  string str;
  cout<<"Enter STRING"<<endl;
  cin>>str;
  cout<<"The string is "<<str<<endl;
}