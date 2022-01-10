#include <iostream>
using namespace std;

int main() {
  int N;
  cout<<"Enter the length of your array"<<endl;
  cin>>N;
  int a[N];
  cout<<"Enter the numbers you want in your array"<<endl;
  for(int i =0; i<N;i++)
  {
    cin>>a[i];
  }
    for(int i =0; i<N;i++) 
    {
      if(a[i] >= a[i+1] && a[i] > a[i-1])
      {
        cout<<"peak Index is "<< i<<endl;
        cout<<"Peak element is "<<a[i]<<endl;
      }
    }
}