#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t){
  int l1 = s.length();
  int l2 = t.length();

  if(l1 != l2)
  return false;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    for(int i=0; i<l1; i++)
      if(s[i] != t[i])
      return false;
      return true;
}
int main() {
  string s,t;
  cout<<"Enter String 1"<<endl;
  cin>>s;
  cout<<"Enter String 2"<<endl;
  cin>>t;
    if(isAnagram (s,t))
    cout<<"Hurrah Anagram Unlocked"<<endl;
    else
    cout<<"Hard Luck..!!  No Anagram Found"<<endl; 
}