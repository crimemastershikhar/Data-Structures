#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void convert (string& name){
  for(int i=0;i<name.length();i++){

    if(islower (name[i])){
      name[i]= toupper(name[i]);
    }
    else if(isupper (name[i])){
      name[i]=tolower(name[i]);
    }
    // name[i] = towupper(name[i]);
  }
}
int main()
{
  string name;
  cout<<"Enter the name u want in cases "<<endl;
  cin>>name;
  convert(name);
  cout<<"The converted result is "<<endl<<name<<endl;
}