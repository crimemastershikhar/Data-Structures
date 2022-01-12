#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node *next;
};
class Linkedlist{
private:
Node *head;
Node *tail;
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
     Node *lastnode = head;
     for(; lastnode->next != NULL; lastnode = lastnode->next ){       
     }
     lastnode->next = new_Node;
     tail = new_Node;
   }
  }
  void length(){
    int counter =0;
    for(Node *new_Node=head; new_Node != NULL; new_Node = new_Node->next){
      counter++;
    }
    cout<<"Length of the list is "<<counter<<endl;
  }
  void print(){
    for(Node *new_Node=head; new_Node != NULL; new_Node=new_Node->next){
      cout<<" "<<new_Node->data<<"->";
    }
  }
};
int main() {
Linkedlist l;
Node* head = NULL;
l.insert(4);
l.insert(3);
l.insert(2);
l.insert(1);
cout<<"The existing list is "<<endl;
l.print();
cout<<endl;
l.length();
cout<<endl;
}