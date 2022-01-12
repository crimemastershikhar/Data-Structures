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
    Node* new_Node = new Node();
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
  void  removeVal(int val){
    Node *new_Node = head;
    Node *prev = NULL;
    while(new_Node != NULL && new_Node->data != val){
      prev = new_Node;
      new_Node = new_Node->next;
    }
    if(new_Node != NULL){
      prev->next = new_Node->next; //Bypassing the values
      delete new_Node;
    }    
    else {
      cout<<"Node Not Found: "<<val<<endl;
    }
  }
  void print(){
    for(Node* new_Node = head; new_Node!=NULL; new_Node = new_Node->next)
    cout<<" "<<new_Node->data<<"->";
  }
};

int main(){
Linkedlist l;
l.insertToHead(23);
l.insertToHead(05);
l.insertToHead(18);
l.insertToHead(9);
l.print();
int h,v;
  cout<<"Enter element to insert at head"<<endl;
  cin>>h;
  l.insertToHead(h);
  cout<<"New list is "<<endl;
  l.print();
  cout<<endl<<"Enter element you want to delete"<<endl;
  cin>>v;
  l.removeVal(v);
  cout<<"The new list is "<<endl;
  l.print();
}