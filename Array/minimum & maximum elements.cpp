#include <iostream>
using namespace std;

int main() {
  int N;
  cout<<"Enter Array Value"<<endl;
  cin>>N;
  int a[N];
  int min = a[0];
  int max = a[0];
  cout<<"Enter the numbers for your array"<<endl;
  for (int i=0;i<N;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<N;i++)
  {
    if (a[i] < min)
    {
      min = a[i];
    }
    else if (a[i] > max)
    {
      max = a[i];
    }
  }
  cout<<"Highest no. is "<<max<<endl<<"Lowest number is "<<min<<endl;
  }