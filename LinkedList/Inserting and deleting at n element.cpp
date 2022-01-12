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
  void insert(int data){
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
  void insertAtnpos(int data, int n){
    Node *new_Node = new Node();    
    new_Node->data = data;
    new_Node->next = NULL;
    if(n ==1){
      new_Node->next = head;
      head = new_Node;
      return;
    }
      Node* temp2 =head;
      for(int i=0;i<n-2;i++){
        temp2 = temp2->next;
      }
      new_Node->next = temp2->next;
      temp2->next = new_Node;
 }  
  void print(){
    for(Node* new_Node = head; new_Node!=NULL; new_Node = new_Node->next)
    cout<<" "<<new_Node->data<<"->";
  }
};

int main(){
Linkedlist l;
l.insert(4);
l.insert(3);
l.insert(2);
l.insert(1);
l.print();
  cout<<endl;
  int n,p;
  cout<<"Enter the value of element that you want to add"<<endl;
  cin>>n;
  cout<<"Enter the pos at which u want to add the value"<<endl;
  cin>>p;
  l.insertAtnpos(n,p);
  l.print();
}