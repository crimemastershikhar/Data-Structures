#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
  int n;
  cout<<"Enter size: "<<endl;
  cin>>n;
  int a[n-1];
  int temp = 0;

  cout<<"\nEnter elemnets: "<<endl;
  for(int i = 0; i < n-1; i++)
  {
    cin>>a[i];
  }
  
  for(int i = a[0]; i <= a[n-2]; i++)
  {
    if(a[temp] == i)
    {
      temp++;
    }
    else
    {
      cout<<"\nMissing element from the array is : "<<i;
    }
  } 
}