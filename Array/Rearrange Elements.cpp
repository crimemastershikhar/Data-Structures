#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int a[N];
  cout<<"Enter your array size"<<endl;
  cin>>N;
  cout<<"Enter array values"<<endl;
  for (int i =0;i<N;i++)
  {
    cin>>a[i];
  }
  int a2[N];
  int j=0;
  for(int i=0;i<N;i++)
  {
    if(a[i]>=0)
    {
      a2[j++]=a[i];
    }
  }
    for(int i=0;i<N;i++)
    {
      if(a[i]<0)
      {
        a2[j++]=a[i];
      }
  }
  cout<<"Organized array will be like below "<<endl;
  for(int i=0;i<N;i++)
  {
    cout<<a2[i]<<" ";
  }
}