#include <bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int> a, int n)
{
  for(int i = 0; i < n; ++i)
  {
    while(a[i] >= 1 && a[i] <= n && a[i] != a[a[i]-1])
    {
      swap(a[i], a[a[i]-1]);
    }
  }

  for(int i = 0; i < n; i++)
  {
    if(a[i] != i + 1)
    {
      return (i + 1);
    }
  }
  return (n + 1); 
}

int main() 
{
  vector<int> a;
  int n,b;
  cout<<"Enter size: "<<endl;
  cin>>n;

  cout<<"Enter elements: "<<endl;
  for(int i = 0; i < n; i++)
  {
    cin>>b;
    a.push_back(b);
  }

  int ans = firstMissingPositive(a, a.size());

  cout<<"Missing Positive Number is: "<<ans<<endl;
}