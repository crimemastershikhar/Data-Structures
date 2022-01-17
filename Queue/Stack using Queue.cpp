#include <iostream>
#include <queue>
using namespace std;

template<class T>
class Stack{
  private:
  int size;
  queue<T> q1;
  queue<T> q2;
  public:
  Stack()
  {
    size =0;
  }
  void push(T data)
  {
    q2.push(data);
    size++;
    while(!q1.empty())
    {
      q2.push(q1.front());
      q1.pop();
    }
    queue<T> temp = q1;
    q1 = q2;
    q2 = temp;
  }
  T pop()
  {
    T temp = q1.front();
    q1.pop();
    size--;
    return temp;    
  }
  T top()
  {
    if(q1.empty())
    {
      cout<<"Output is empty stack"<<endl;
      return -1;
    }
    return q1.front();
  }
  int Size()
  {
    return size;
  }
  bool isEmpty(){
    return q1.empty();
  }
};
int main() {
Stack<int> *stack = new Stack<int>();

  stack->push(13);
  stack->push(5);
  stack->push(1995);

  if(stack->isEmpty())
    cout << "Stack is empty.\n";
  else
    cout << "Stack is not empty.\n";

  cout << "\nPop: " << stack->pop();
  cout << "\nTop: " << stack->top()<<endl<<endl;  
} 