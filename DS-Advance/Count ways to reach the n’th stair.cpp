#include <iostream>
using namespace std;
int mem[1000];

int climb_Recurrsive(int n){
if(n <= 1){
  return 1;
}
return climb_Recurrsive(n-1) + climb_Recurrsive(n-2);
}

int climb_Memoization(int n){
  if(n<=1){
    return 1;
  }
  if(mem[n] != 0){
    return mem[n];
  }else{
  int n1;
  mem[n] = n1 = climb_Recurrsive(n-1) + climb_Recurrsive(n-2);
  return n1;
  }
}

int main() {
  int n;
  cout<<"Enter the number of stairs u want to climb"<<endl;
  cin>>n;
  cout<<"No. of ways with which u can climb "<<n<<" stairs is :: "<<climb_Recurrsive(n)<<endl<<endl;
  cout<<"No. of ways with which u can climb "<<n<<" stairs is:: "<<climb_Memoization(n)<<endl<<endl;
} 