#include <iostream>
using namespace std;
#include<bits/stdc++.h>

const int All_Char = 26;

void sortString(string &str){
  int charCount[All_Char] = {0};
//Traversing the string
  for(int i=0;i<str.length();i++)
//Calculating location of char
  charCount[str[i]- 'a']++;
//Traverse hash array and print chars
  for(int i=0; i<All_Char;i++)
    for(int j=0; j<charCount[i];j++)
    cout<<(char)('a' + i);
}
int main() {
  string s;
  cout<<"Enter Character to be sorted"<<endl;
  cin>>s;
  sortString(s);
}