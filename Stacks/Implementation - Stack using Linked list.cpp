#include <iostream>
using namespace std;

template<class S>
struct Node{
  S data;
  Node<S> *next;
};
template<class S>
class Stack{
  private:
  Node<S> *top;
  public:
  Stack(){
    top = NULL;
  }
  void push(S data){
    Node<S> *node = new Node<S>();
    node->data = data;
    node->next = NULL;
    node->next = top;
    top = node;
  }
  S pop(){
    Node<S> *temp = top;
    S data;
    if(!temp){
      cout<<endl<<"Entire Stack chosen is NULL"<<endl;
      return -1;
    }
    data = top->data;
    top = top->next;
    delete temp;
    return data;
  }
  bool isEmpty(){
    return top == NULL;
  }
  S peek(){
    if(isEmpty()){
      cout<<endl<<"Stack Empty"<<endl;
      return -1;
    }
      return top->data;
  }
};

int main() {
  Stack<int> *stack = new Stack<int>();
  stack->push(01);
  stack->push(02);
  stack->push(03);
  cout<<"Popping "<<stack->pop()<<endl<<"Checking for empty stack "<<stack->isEmpty()<<endl<<"Peek vaue after pop is  "<<stack->peek()<<endl;    
} 