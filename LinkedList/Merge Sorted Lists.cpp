#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node *next;
};
Node *sortedMerge(Node *a, Node *b){
  Node *result = NULL;
  if(a == NULL)
    return b;
  else if(b == NULL)
    return a;
    //picking a or b + recursion
  if(a->data <= b->data){
    result = a;
    result->next = sortedMerge(a->next, b );
  }
  else{
    result = b;
    result->next = sortedMerge(a, b->next);
  }
  return result;
} 
//func take aray of lists = sorted output
  Node *mergeKLists(Node *arr[], int last)
  {
    while(last != 0){
      int i = 0;
      int j = last;
        while(i<j){   //i,j is a pair
        arr[i] = sortedMerge(arr[i], arr[j]);
        i++;
        j--;
        if(i>=j)   //all pair merged and last updated
          last=j;
      }
    }
     return arr[0];
  }
  Node *insert(int data){
    struct Node *new_Node = new Node();
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
  }
  void print(Node *head){
    while(head != NULL){
      cout<<head->data<<" ";
      if(head->next)
      cout<<" -> ";
      head = head->next;
    }
    cout<<endl;
  }

int main() {
  int k =3;
  int n = 4;
  Node *arr[k];     

  arr[0] = insert(1);
  arr[0]->next = insert(3);  
  arr[0]->next->next = insert(5);    
  arr[0]->next->next->next = insert(7);      

  arr[1] = insert(2);
  arr[1]->next = insert(4);  
  arr[1]->next->next = insert(6);    
  arr[1]->next->next->next = insert(8);    

  arr[2] = insert(0);
  arr[2]->next = insert(9);  
  arr[2]->next->next = insert(10);    
  arr[2]->next->next->next = insert(11);              
  Node *head = mergeKLists(arr, k-1);  //merging lists
  cout<<"Final lists sorted and merged are "<<endl;
  print(head);
} 