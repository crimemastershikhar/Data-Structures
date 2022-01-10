#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int n;
  cout<<"Enter size: "<<endl;
  cin>>n;

  int a[n];

  cout<<"Enter elements: "<<endl;
  for(int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  cout<<endl;

  for(int i = 0; i < n; i++)
  {
    for(int j = i+1; j < n; j++)
    {
      if(a[i] == a[j])
      {
        cout<<"The repeated elements are"<<endl;
        cout<<a[j]<<" ";
      }
    }
  }
}