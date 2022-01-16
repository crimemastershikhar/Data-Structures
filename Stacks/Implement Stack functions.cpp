#include <iostream>
using namespace std;

template<class T>
struct Node{
  Node<T> *next;
  Node<T> *prev;
  T data;
};
template<class T>
class Stack{
  private:
  Node<T> *top;
  Node<T> *mid;
  int length;
  public:
  Stack(){
    top = NULL;
    mid = NULL;
    length = 0;
  }
  void push(T data){
    Node<T> *node = new Node<T>();
    node->data = data;
    node->next = top;
    node->prev = NULL;
    if(top != NULL){
      top->prev = node;
    }
    top = node;
    length++;
    if(length == 1){
      mid = node;
      return;
    }
    if (length % 2 == 0)
      {
        mid = mid->prev;         
      }
  }
  T pop(){
    Node<T> *temp = top;
    T data;
    if(!temp)
    {
      cout<<"Stack is Underflown"<<endl;
      return -1;
    }
    data = top->data;
    top = top->next;
    length--;
    if(length % 2 == 1)
    {
      mid = mid->next;
    }
    if(length == 0)
    {
      mid = NULL;
    }    
    delete temp;
    return data;
  }
  bool isEmpty()
  {
    return top == NULL;
  }
  T peek()
  {
    if(isEmpty())
    {
      cout<<"Empty Stack"<<endl;
      return -1;
    }
    return top->data;
  }
  T findMiddle()
  {
    if(mid == NULL)
    {
      return -1;
    }
    return mid->data;
  }
  void deleteMiddle()
  {
    if(mid == NULL)
    {
      return;
      // length--;
    }
    if(mid->prev == NULL)
    {
      if(mid->next == NULL)
      {
        delete mid;
        mid = NULL;
        top = NULL;
      }
      else
        {
          top = top->next;
          delete mid;
          mid = top;
        }
      return;
    }
    Node<T> *temp = mid;
    mid->prev->next = mid->next;
    mid->next->prev = mid->prev;
    if( length % 2 == 0)
    {
      mid = mid->prev;
    }
    else
    {
      mid = mid->next;
    }
    delete temp;
  }
  void print(){
    Node<T> *temp = top;
    cout<<"List Starts"<<endl;
    while(temp != NULL)
    {
      cout<<temp->data<<endl;
      temp = temp->next;
    }
    cout<<"List finished "<<endl;
  }
};

int main() {
  Stack<int> *stack = new Stack<int>();
  cout<<"The Stack is given below"<<endl;
  stack->push(1);
  stack->push(02); 
  stack->push(03);
  stack->push(04);
  stack->push(05);
  stack->push(06);
  stack->push(7);  
  stack->print();
  cout<<"Middle elements in stack is "<<stack->findMiddle()<<endl;
  cout<<"After Deleting Middle element in Stack is "<<endl;
  stack->deleteMiddle();   
  stack->print();
  cout<<"Mid: "<<stack->findMiddle()<<endl;
  cout<<"Peek:  "<<stack->peek();
  cout<<"Pop:  "<<stack->pop();
  stack->print();
  cout<<"The Middle element of the above latest stack is "<<stack->findMiddle()<<endl;        
	return 0;
}