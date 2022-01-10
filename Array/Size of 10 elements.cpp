#include <iostream>
using namespace std;

int main() {
  int a[10];
  int sum=0;
  cout<<"Enter the 10 numbers of which u want the sum"<<endl;
   for (int i=0; i<10;i++)
   {
     cin>>a[i];
   }
   for (int i =0; i<10;i++)
   {
     sum +=a[i];
   }
   cout<<endl<<"sum of all numbers is"<<endl<<sum;
}
