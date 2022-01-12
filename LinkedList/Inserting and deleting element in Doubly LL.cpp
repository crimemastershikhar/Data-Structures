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
 void insertatTail(int data){
 Node *new_Node = new Node();
 new_Node->data = data;
 new_Node->next=NULL;
 if(head == NULL){
   new_Node->prev = NULL;
   head = new_Node;
   }
   else{
     Node *temp = head;
     while(temp->next != NULL){
       temp = temp->next;
     }
     temp->next = new_Node;
     new_Node->prev = temp;
   }
 }
 void deleteatTail(){
  if(head == NULL){
    cout<<"Error 404: List is empty"<<endl;
  } 
  else{
    Node *temp = head;
    if(temp->prev == temp->next){
      head = NULL;
      delete(temp);
    }
     else {
       while(temp->next != NULL){
         temp = temp->next;
       }
       temp->prev->next = NULL;
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
  d.insertatTail(1);
  d.insertatTail(2); 
  d.insertatTail(3);
  d.insertatTail(4);
  d.insertatTail(5);
  cout<<"Elements in list are"<<endl;
  d.print();
  cout<<endl<<"Enter your element at head"<<endl;
  int a;
  cin>>a;
  d.insertatTail(a);       
  cout<<endl<<"New List is "<<endl;
  d.print();
  cout<<"Deleting the latest element inserted"<<endl;
  d.deleteatTail();
  cout<<endl<<"Updated list is "<<endl;
  d.print();
}