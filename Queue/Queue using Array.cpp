#include <iostream>
using namespace std;

template<class T>
class Queue{
  private:
  int rear, front;
  T queue[100];
  public:
  Queue()
  {
    front = 0;
    rear = 0;
  }
  void push (T data)
  {
    if(rear == 100)
    {
      cout<<"Queue is at full capacity"<<endl;
      return;
    }
    queue[rear++] = data;
  }
  T pop()
  {
    if( rear == front)
    {
      cout<<"Queue Status: Queue is empty. Cant pop"<<endl;
      return -1;
    }
    int temp = queue[front];
    for(int i=0; i< rear -1; i++)
    {
      queue[i] = queue[i+1];
    }
    rear--;
    return temp;
  }
  T queueFront()
  {
    if(rear == front)
    {
      return -1;
    }
    return queue[front];
  }
  int size()
  {
    return rear;
  }
  bool isEmpty()
  {
    return (front == rear);
  }
  void print()
  {
    for(int i=0; i<rear;i++)
    {
      cout<<queue[i]<<endl;
    }
  }
};

int main() {
  Queue<int> queue;
  queue.push(1);
  queue.push(2);
  queue.push(3);
  queue.push(4);      
  queue.push(5);
  cout<<"The Stack that we are taking has elements like "<<endl;
  queue.print();
  if(queue.isEmpty())
    cout<<"\nQueue is empty as of now"<<endl;
    else
    cout<<"Queue not empty"<<endl;
    cout<<"\nFront element is "<<queue.queueFront()<<endl;
    cout<<"\nSize of the stack is "<<queue.size()<<endl;
    cout<<"\nPopping the 1st element: "<<queue.pop()<<endl;
  queue.print();
  cout<<"Current size of stack is "<<queue.size()<<endl;
} 