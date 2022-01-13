#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int data;
	Node* next;
};

Node *new_Node(int data)
{
	Node* temp = new Node();
	temp -> data = data;
	temp -> next = NULL;
	return temp;
}

bool isCircular(Node *head)
{
	if(head == NULL)
	{
		return true;
	}
	Node *temp = head -> next;
	while(temp != NULL && temp != head)
	{
		temp = temp -> next;
	}
	if(temp == head)
	{
		return true;
	}
	return false;
}

int main() 
{
	Node* head = new_Node(1);
	head -> next = new_Node(2);
	head -> next -> next = new_Node(3);
	head -> next -> next -> next = new_Node(4);
	head -> next -> next -> next -> next = new_Node(5);

	if(isCircular(head))
	{
		cout<<"\nList is Circular! "<<endl;
	}
	else
	{
		cout<<"\nList is not Circular! "<<endl;
	}
	head -> next -> next -> next -> next -> next = head; 

	if(isCircular(head))
	{
		cout<<"\nList is Circular! "<<endl;
	}
	else
	{
		cout<<"\nList is not Circular! "<<endl;
	}
}