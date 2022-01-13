#include<iostream>
using namespace std;

struct Node{
  int data;
  Node *next;
};
struct insertNode{
  void pushNode(struct Node **head, int data){
    struct Node *new_Node = new Node();
    new_Node->data = data;
    new_Node->next = *head; 
    *head = new_Node;
  }
    void print(struct Node *head){
      while(head != NULL){
        cout<<head->data<<" -> ";
        head = head->next;
      }
      cout<<"NULL"<<endl;
    }
    void printMiddle(Node *head){
      struct Node *slow = head;
      struct Node *fast = head;
        if(head != NULL){
          while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
          }
          cout<<"The middle element of the list is  ->"<<slow->data<<endl<<endl;
        }
    }
};

int main(){
  struct Node *head = NULL;
  struct insertNode *temp = new insertNode();
  for(int i=5;i>0;i--){
    temp->pushNode(&head, i);
    temp->print(head);
    temp->printMiddle(head);
  }
}