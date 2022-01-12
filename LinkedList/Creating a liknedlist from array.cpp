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
void arraytoLL(int a[], int n)
  {
      for(int i=0; i<n; i++){
        insert(a[i]);
     }
    } 
  void print(){
    for(Node *new_Node=head; new_Node != NULL; new_Node=new_Node->next){
      cout<<" "<<new_Node->data<<"->";
    }
  }
};
int main() {
Linkedlist l;
int n;
cout<<"Enter the size of array u want to print"<<endl;
cin>>n;
cout<<endl;
int a[n];
cout<<"Enter Array Elements"<<endl;
for(int i=0;i<n;i++){
  cin>>a[i];
}
cout<<endl;
cout<<"The required converted list here is"<<endl;
l.arraytoLL(a,n);
l.print();
}