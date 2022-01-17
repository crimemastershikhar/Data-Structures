#include <iostream>
#include<queue>
#include<stack>
using namespace std;

void printQueue(queue<int> Queue)
{
  while(!Queue.empty())
  {
    cout<<Queue.front()<<" ";
    Queue.pop();    
  }
}
void reverseQueue(queue<int>& Queue)
{
  stack<int> Stack;
  while(!Queue.empty())
  {
    Stack.push(Queue.front());
    Queue.pop();
  }
  while(!Stack.empty())
  {
    Queue.push(Stack.top());
    Stack.pop();
  }
}

int main() {
  queue<int> Queue;
  Queue.push(1);
  Queue.push(2);
  Queue.push(3);
  Queue.push(4);
  Queue.push(5);
  cout<<"The original queue is "<<endl;
  printQueue(Queue);
  cout<<endl;
  cout<<endl<<"The new reversed list is "<<endl;
  reverseQueue(Queue);  
  printQueue(Queue);        
} 
