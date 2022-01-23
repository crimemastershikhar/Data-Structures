#include <iostream>
using namespace std;

  int mem[10];
int sum_Recursive(int n){
  if(n == 0){
    return 0;
  }
  return n + sum_Recursive(n-1);
}

int sum_Memoization(int n){
  if(n==0){
    return 0;
  }
  if(mem[n] != 0){
    return mem[n];
  }else{
    int n1;
    mem[n] = n1 = n +sum_Memoization(n-1);
    return n1;
  }
}

int main() {
int n;
cout<<"Enter the number until which u want the sum"<<endl;
cin>>n;
cout<<"Using Recurrsion, the SUM IS: "<< sum_Recursive(n)<<endl;
cout<<"Using Memoization, the SUM IS: "<< sum_Memoization(n);
} 