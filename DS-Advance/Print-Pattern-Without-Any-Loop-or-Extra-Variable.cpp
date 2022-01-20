#include <iostream>
using namespace std;

void pat(int n){
  if (n < 0){
    cout <<n<<",";
    return;
  }
    cout <<n<<",";
    pat(n-5);
    cout <<n<<",";      
}
int main() {
  int n;
  cout<<"Enter the no. from which u want to see d pattern"<<endl;
  cin>>n;
  pat(n);
  return 0;
} 