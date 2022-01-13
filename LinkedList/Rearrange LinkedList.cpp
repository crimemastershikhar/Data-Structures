#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  struct Node *next;
};
  Node *new_Node(int data){
    Node *new_Node = new Node();
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
  }
  void reverseList(Node **head){
    Node *prev = NULL;
    Node *curr = *head;
    while(curr != NULL){
      Node *temp = curr->next;
      curr->next = prev;
      prev=curr;
      curr=temp;
    }
    *head = prev;
  }
  void rearrangeList(Node *head){    
  Node *slow = head;                  //slow and fast coz of tortoise and hare method
  Node *fast = slow->next; 
  while(fast != NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;    
  } //split below
    Node *head1 = head;
    Node *head2 = slow->next;
    slow->next = NULL;
    reverseList(&head2);
    head = new_Node(0);
    Node *curr = head;  //new pointer to dummy node
      while(head1 != NULL && head2 != NULL){
        if(head1 != NULL){
          curr->next = head1;
          curr = curr->next;
          head1 = head1->next;
        } //below add 2nd list
        if(head2 != NULL){
          curr->next = head2;
          curr = curr->next;
          head2 = head2->next;
        }
      }
    head = head->next;
  }
  void print(Node *head){
    while(head != NULL){
      cout<<head->data<<" ";
      if(head->next)
        cout<<" -> ";
        head = head->next;      
    }
      cout<<endl;    
  }

int main() {
  Node* head = new_Node(1);
  head->next = new_Node(2);
  head->next->next = new_Node(3);
  head->next->next->next = new_Node(4);
  head->next->next->next->next = new_Node(5);  
  // head->next->next->next->next->next = new_Node(6);  
	cout<<"\nBefore we rearrange: \n"<<endl;
	print(head);
	cout<<"\nAfter we rearrange: \n"<<endl;
	rearrangeList(head);
	print(head);      
} 