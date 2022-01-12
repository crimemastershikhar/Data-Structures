#include <iostream>
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
  head = NULL;
  }
  void insertatHead(int data){
    Node *new_Node = new Node();
    new_Node->data = data;
    new_Node->prev = NULL;
    if(head == NULL){
      new_Node->next = NULL;
      head = new_Node;
    }
    else{
      new_Node->next = head;
      head = new_Node;
    }
  }
  void deleteatHead(){
    if(head == NULL){
      cout<<"Error 404: List is empty"<<endl;
    }
    else{
      Node *temp = head;
      if(temp->prev == temp->next){
        head = NULL;
        delete(temp);
      }
      else{
        head = temp->next;
        head->prev = NULL;
        delete(temp);
        }
    }
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
  d.insertatHead(1);
  d.insertatHead(2); 
  d.insertatHead(3);
  d.insertatHead(4);
  d.insertatHead(5);
  cout<<"Elements in list are"<<endl;
  d.print();
  cout<<endl<<"Enter your element at head"<<endl;
  int a;
  cin>>a;
  d.insertatHead(a);       
  cout<<endl<<"New List is "<<endl;
  d.print();
  cout<<"Deleting the latest element inserted"<<endl;
  d.deleteatHead();
  cout<<endl<<"Updated list is "<<endl;
  d.print();
} 