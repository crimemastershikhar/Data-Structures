#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node *next;
};
class LinkedList{
  private:
  Node *head;
  public:
  LinkedList(){
    head=NULL;
  }
  void insertToHead(int data){
  Node* new_Node = new Node(); //Creating a new node
  new_Node -> data = data; //Storing the data
  // node 5 -> next = NULL;
  new_Node->next = NULL;
    if(head == NULL){
      head = new_Node;
    }
      else {
      new_Node ->next = head;
      head = new_Node;
    }
  }
  void print(){    
    for(Node* new_Node = head; new_Node != NULL; new_Node = new_Node->next){
      cout<<" "<<new_Node->data<<"-> ";
    }
  }
};
int main() {
  LinkedList ll;
  cout<<"------------------start-----------------"<<endl;
  ll.insertToHead(10);
  ll.insertToHead(25);
  ll.insertToHead(5);
  ll.insertToHead(30);
  ll.insertToHead(12);  
  ll.print();
  cout<<"------------------end-----------------"<<endl;  
  int h;
  cout<<"Enter element to insert at head"<<endl;
  cin>>h;
  ll.insertToHead(h);
  cout<<"New list is "<<endl;
  ll.print();
}
