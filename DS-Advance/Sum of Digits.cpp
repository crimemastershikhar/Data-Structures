#include <iostream>
using namespace std;

int sum(int n){
 if(n/10 == 0){
    return n;
  }
  return (n%10 + sum(n/10));
}
int main() {
  int n;
  cout<<"Enter the no. of which u want the sum"<<endl;
  cin>>n;
  cout<<"Sum of the digits u entered is "<<endl;
  cout<<sum(n);
} 
