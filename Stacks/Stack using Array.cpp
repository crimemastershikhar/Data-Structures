#include <iostream>

template<class T>
class Stack{
private:
  T stack[100];
  int top;

public:
  Stack()
  {
    top = -1;
  } 

  void push(T data)
  {
    if(top == 99)
    {
      std::cout << "Stack is overflowN";
      return;
    }  
    stack[++top] = data;
  }

  T pop()
  {
    if(isEmpty())
    {
      std::cout << "Stack found to be empty ";
      return top;
    } 
    return stack[top--];
  }

  T peek()
  {
    if(isEmpty())
    {
      std::cout << "Stack is empty ";
      return top;
    } 
    return stack[top];
  }

  void print()
  { 
    std::cout << "-----Start-----" << std::endl;
    for(int i = top; i >= 0; i--)
    {
      std::cout << stack[i] << std::endl;
    }
    std::cout << "------End------" << std::endl;
  }

  bool isEmpty()
  {
    return (top == -1);
  }
};


int main() {

  Stack<int>* stack = new Stack<int>();

  stack->push(25);
  stack->push(56);
  stack->push(57);

  stack->print();

  if(stack->isEmpty())
    std::cout << "\nStack is empty.\n";
  else
    std::cout << "\nStack is not empty.\n";

  std::cout << "\nPop: " << stack->pop();
  std::cout << "\nPeek: " << stack->peek() << std::endl << std::endl;

  stack->print();
}