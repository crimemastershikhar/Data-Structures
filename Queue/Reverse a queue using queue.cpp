#include <iostream>
#include <queue>


template<typename T>
void reverseQueue(std::queue<T>& queue)
{
  std::queue<T> ans;
  int n = queue.size();

  for(int i=0; i < n; i++)
  {
    for(int j=0; j < queue.size() - 1; j++)
    {
      T data = queue.front();
      queue.pop();
      queue.push(data);
    }

    ans.push(queue.front());
    queue.pop();
  }

  queue = ans;
}


template<typename T>
void print(std::queue<T> queue)
{
  std::cout << "-----Start-----" << std::endl;
  while(!queue.empty())
  {    
    std::cout << queue.front() << std::endl;
    queue.pop();
  }
  std::cout << "------End------" << std::endl;
}


int main() {
  std::queue<int> queue;
  queue.push(10);
  queue.push(20);
  queue.push(30);
  queue.push(40);

  print(queue);
  reverseQueue(queue);

  std::cout << std::endl;
  print(queue);
} 