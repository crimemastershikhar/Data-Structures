#include <iostream>
using namespace std;

void Fib(int n,int a1,int a2){
  int next;
  if(n >0){
    next = a1 + a2;
    a1 = a2;
    a2 = next;
    cout << next << " , ";
    Fib(n-1, a1, a2);
  }
}

int main() {
  int n;
  cout << "Enter the number till u want Fib"<<endl;
  cin >> n;
  cout<<"Below Fibonacci Series is "<<endl;
  cout<<" 0 1";
  Fib(n-2, 0, 1);
  return 0;
} 
