#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int a[15];
  for(int i = 0 ;i < 15 ;i++)
  {
      if( i % 2 == 0)
      {
        a[i] = 2 * i;
      }
      else
      {
        a[i] = 3 * i;
      }
  }
      for(int i = 0 ;i < 15 ;i++)
      {
        cout<<a[i]<<" ";
      }
}