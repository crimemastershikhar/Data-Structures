#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string isPalindrome(string& S)
{
  string P = S;
 //Reverse string
  reverse(P.begin(), P.end());
 //Conditions
  if(S==P){
    return "Yes";
  }
  else{
    return "No";
  }
}

int main() {
  string S;
  cout<<"Enter the keys which are same even if reversed"<<endl;
  cin>>S;
  cout<<isPalindrome(S);
}