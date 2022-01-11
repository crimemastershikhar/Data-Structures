#include <bits/stdc++.h>
using namespace std;

void countLetters(string str){
  map<char,int> count;
  for(int i=0; i<str.length(); i++)
  count[str[i]]++;
    for(auto show:count){
      cout<<show.first<<"    "<<show.second;
      cout<<endl;
    }
}
int main()
{
  string str;
  cout<<"Enter String with duplicate values"<<endl;
  cin>>str;
  countLetters(str);
  return 0;
}