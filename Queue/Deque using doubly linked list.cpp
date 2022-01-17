#include <iostream>
#include<list>

using namespace std;

template<class T>
class Deque{
  private:
  list<T> list;
  public:
  void insertFront(T data)
  {
    list.push_front(data);
  }
  void insertRear(T data)
  {
    list.push_back(data);
  }
  T deleteFront()
  {
    if(isEmpty())
    {
      cout<<"Queue empty"<<endl;
      return -1;
    }
    T data = *list.begin();
    list.pop_front();
    return data;    
  }
  T deleteRear()
  {
    if(isEmpty())
    {
      cout<<"Queue empty"<<endl;
      return -1;
    }
    T data = getRear();
    list.pop_back();
    return data;
  }
  T getFront()
  {
    if(isEmpty())
    {
      cout<<"Queue empty"<<endl;
      return -1;
    }
    return *list.begin();        
  }
  T getRear()
  {
    if(isEmpty())
    {
      cout<<"Queue empty"<<endl;
      return -1;
    }
    T data;
    for (auto it = list.begin(); it!=list.end();it++)
    {
      data = *it;
    }    
    return data;
  }
  int size()
  {
    return list.size();
  }
  bool isEmpty()
  {
    return list.empty();
  }
  void print()
  {
    cout<<"The Queue starts here"<<endl;
    for(auto it = list.begin(); it != list.end(); it++)
    cout<<*it<<endl;
  }
};
int main() {
  Deque<int> queue;
  queue.insertFront(1);
  queue.insertFront(2);
  queue.insertFront(3);
  queue.insertFront(4);
  queue.insertRear(5);
  queue.insertRear(6);
  queue.print();        
  cout<<"Front element is: "<<queue.getFront()<<endl;
  cout<<"Rear element is: "<<queue.getRear()<<endl<<endl;  
  cout<<"Deleting front element: "<<queue.deleteFront()<<endl;
  cout<<"Deleting Rear element: "<<queue.deleteRear()<<endl<<endl;
  cout<<"Updated Final list is "<<endl;
  queue.print();
} 