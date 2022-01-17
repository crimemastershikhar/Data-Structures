#include <iostream>
using namespace std;

template<class T>
class Queue{
  private:
  int front, rear;
  T queue[100];
  public:
  Queue(){
    front = rear = 0;
  }
  void push(T data){
    if(rear == 100)
    {
      cout<<"Queue is Full"<<endl;
      return;
    }
    queue[rear++] = data;
  }
  T queueFront()
  {
    if(front == rear)
    {
      return -1;
    }
    return queue[front];
  }
  void print()
  {
    cout<<"The pushed queue is updated below"<<endl;
    for(int i = 0;i<rear;i++)
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
  queue.print();
} 
