#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node *next;
};
class Linkedlist{
  public:
  Node *head;
  public:
  Linkedlist(){
    head = NULL;
}
  void insert(int data){
   Node *new_Node = new Node();
   new_Node->data = data;
   new_Node->next = NULL;
   if(head == NULL){
     head = new_Node;
   }
   else{
     new_Node->next = head;
     head = new_Node;
   }
  }
  void print(){
    while (head != NULL){
      cout<<head->data<<" -> ";
      head = head->next;
    }
    cout<<endl;
  }
};
   void checkLoop(Node *head){
    if(head == NULL){
      cout<<"\n There is no loop present"<<endl;
      return;
    }
      Node *p1 = head;
      Node *p2 = head;
      while ((p1->next != NULL) && (p2->next != NULL)){
        p1 = p1->next;
        if(p2->next->next != NULL){
          p2 = p2->next->next;
        }
        else{ cout<<"\n No loop Present i..e FALSE "<<endl;
        return;        
        }
        if(p1 == p2){
          cout<<"\n Loop is present i.e. true"<<endl;
          return;
        }
      }
      cout<<"\n No Loop present i.e. FALSE"<<endl;
      return;
    }
int main() {
  Linkedlist *ll = new Linkedlist();
  ll->insert(1);
  ll->insert(2);
  ll->insert(3);
  ll->insert(2);
  ll->insert(5);
  ll->print();
  checkLoop(ll->head);
} 