#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node *next;
  Node *prev;
};
class Doublyll{
private:
Node *head;
public:
Doublyll(){
  head=NULL;
}
void insert(int data){
  Node *new_Node = new Node();
  new_Node->data = data;
  new_Node->next = NULL;
  if(head == NULL){
    new_Node->prev = NULL;
    head = new_Node;
  }
  else{
    Node *temp = head;
    while(temp->next != NULL){
      temp=temp->next;
    }
    temp->next = new_Node;
    new_Node->prev = temp;
  }
}
void reverse(){
  Node *pt1 = head;
  Node *pt2 = pt1->next;
  pt1->next = NULL;
  pt1->prev = pt2;
  while(pt2 != NULL){
   pt2->prev = pt2->next;
   pt2->next = pt1;
   pt1=pt2;
   pt2=pt2->prev;
  }
  head = pt1;
}
  void print (){
    if(head == NULL){
      cout<<"Error 404: List is empty"<<endl;
    }
    else{
      Node *temp = head;
      cout<<"Start <-- ";
      while (temp->next != NULL){
        cout<<temp->data<<" <-> ";
        temp = temp->next;
      }
      cout<<temp->data<<"--> End";
      cout<<endl;
    }    
  } 
};
int main() {
  Doublyll d;
  d.insert(1);
  d.insert(2); 
  d.insert(3);
  d.insert(4);
  d.insert(5);
  cout<<"Elements in list are"<<endl;
  d.print();
  cout<<endl<<"Reversed list is "<<endl;
  d.reverse();    
  d.print();
}