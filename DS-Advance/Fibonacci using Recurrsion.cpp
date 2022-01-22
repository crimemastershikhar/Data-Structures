#include <iostream>
using namespace std;

int fib(int n){
  if (n<2){
    return n;
  }
  return fib(n-1) + fib(n-2);
}
int main(){
  int n;
  cout << "Enter the number till u want Fib"<<endl;
  cin >> n;
  cout<<"Below Fibonacci Series is "<<endl;  
  for (int i=0; i <= n; ++i){
    cout<<fib(i)<<endl;
  }
}
