#include <iostream>
#include<stack>
using namespace std;

  struct Queue
  {
    stack<int> s1,s2;
    void enQueue(int p)
    {
      s1.push(p);
    }
    int deQueue()
    {
      if(s1.empty() && s2.empty())
      {
        cout<<"We have an empty Queue"<<endl;
        return 0;
      }
      if(s2.empty())
      {
        while(!s1.empty())
        {
          s2.push(s1.top());
          s1.pop();
        }
      }
      int p = s2.top();
      s2.pop();
      return p;
    }
  };
int main() {
  Queue q1;
  q1.enQueue(1);
  q1.enQueue(2);
  q1.enQueue(3);
  q1.enQueue(4);
  q1.enQueue(5);       
  cout<<"Queues Using stacks are "<<endl;
    cout << q1.deQueue() << '\n';
    cout << q1.deQueue() << '\n';
    cout << q1.deQueue() << '\n';  
    cout << q1.deQueue() << '\n';  
    cout << q1.deQueue() << '\n';      
} 