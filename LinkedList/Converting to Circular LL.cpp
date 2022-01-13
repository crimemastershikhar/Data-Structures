#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node *next;
};
class Circularll{
  private:
  Node *head;
  public:
  Circularll(){
    head = NULL;
   }
   Node *iscircular(){
     Node *temp = head;
     while(head->next != NULL){
       head = head->next;
     }
     head->next = temp;
     return temp;
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
       head=new_Node;
     }
   }
   void print(Node *temp){
     Node *temp2 = temp;
     while(temp2->next != temp){
       cout<<temp2->data<<" -> ";
       temp2 = temp2->next;
     }
     cout<<temp2->data<<endl; //to include the very first number as well
   }
};

int main() {
  Circularll cll;
  cll.insert(1);
  cll.insert(2); 
  cll.insert(3);
  cll.insert(4);     
  Node *temp = cll.iscircular();
  cout<<"Final Elements are"<<endl;
  cll.print(temp);
} 