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
  public:
  Linkedlist(){
    head = NULL;
}
  void insertToHead(int data){
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
  void insertToTail(int data){
    Node *new_Node = new Node();
    new_Node->data = data;
    if(head == NULL){
      head = new_Node;
    }
    else{
    Node *lastnode = head;
    for(; lastnode->next != NULL; lastnode = lastnode->next){
    }    
    lastnode ->next = new_Node;
    }
    }
  void print(){
    for (Node *new_Node = head; new_Node != NULL; new_Node = new_Node->next)
    cout<<" "<<new_Node->data<<",";
  }
};

int main(){
Linkedlist l;
l.insertToHead(23);
l.insertToHead(05);
l.insertToHead(18);
l.insertToHead(9);
cout<<endl;
cout<<"The existing list is "<<endl;
l.print();
cout<<endl;
int h,v;
  cout<<"Enter element to insert at head"<<endl;
  cin>>h;
  l.insertToHead(h);
  cout<<"New list is "<<endl;
  l.print();
  cout<<endl;
  cout<<"Enter element to insert at Tail"<<endl;
  cin>>v;
  l.insertToTail(v);
  cout<<"New list is "<<endl;
  l.print();  
}