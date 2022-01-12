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
  void deleteatTail(){
    Node *temp = tail->next;
    if(tail == NULL){
      cout<<"List empty"<<endl;
    }
      else if (temp->next == temp){
        tail = NULL;
        delete(temp);
      }
      else{
        Node *temp2 = temp;
        while(temp2->next != tail){
          temp2 = temp2->next;
        }
        temp2->next = temp;
        delete(tail);
        tail = temp2;
      }
    }
  void print()
   	{
		Node* temp = tail -> next;
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

	cout<<"\nDeleting an element from the front: "<<endl;
	cll.deleteatTail();

	cout<<"\nElements in the list after deleting from front: "<<endl;
	cll.print();
}