#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node *next;
};
class Circularll{
  private:
  Node *tail;
  public:
  Circularll(){
    tail = NULL;
  }
  void insertatTail(int data){
    Node *new_Node = new Node();
    new_Node->data = data;
    new_Node->next = NULL;
    if (tail == NULL){
      tail = new_Node;
      new_Node->next = tail;
    }
    else{
      Node *temp = tail->next;
      tail->next = new_Node;
      new_Node->next = temp;
      tail=new_Node;
    }
  }
  int count(){
    int countn=0;
    Node *temp = tail->next;
    while(temp != tail){
      countn++;
      temp = temp->next;
    }
    countn++;
    return countn;
  }
  void print()
   	{
		Node *temp = tail -> next;
		while(temp != tail)
		{
			cout<<temp -> data<<" -> ";
			temp = temp -> next;
		} 
		cout<<temp -> data<<endl;
	}
};  

int main() {
	int n;
  Circularll cll;
	cout<<"\nEnter size: "<<endl;
	cin>>n;
	int a[n];
	cout<<"\nEnter elements: "<<endl;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin>>x;
		cll.insertatTail(x);
	}
	cout<<"\nElements in the list after inserting at front: "<<endl;
	cll.print();
	cout<<"\nThe no. of nodes above are "<<endl<<cll.count()<<endl;
}