#include<bits/stdc++.h>
using namespace std;

stack<int> st;
void push_Number(int number){
  while(number != 0){
    st.push(number % 10);
    number = number/10;
  }  
}
int reverse_Number(int number){
  push_Number(number);
  int reverse = 0;
  int i =1;
  while(!st.empty()){
    reverse = reverse + (st.top()*i);
    st.pop();
    i=i*10;
  }
  return reverse;
}
int main() {
  cout<<"Enter Number you want to see as reversed"<<endl;
  int n;
  cin>>n;
  cout<<"Original number is "<<n<<endl;
  cout<<"Reversed Number is: "<<reverse_Number(n);
  return 0;
} 