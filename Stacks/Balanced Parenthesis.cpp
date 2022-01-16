#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string exp){
  bool flag = true;
  int count = 0;
  for (int i=0; i<exp.length();i++){
    if(exp[i] == '(')
    {
      count++;
    } else
      {
        count--;        
      }
    if(count < 0){
      flag = false;
      break;
    }
  }
    if(count != 0)
    {
      flag = false;
    }
  return flag;
}

int main() {
  string exp1 = "((()))()()((()))";
  cout<<"Expression 1 to be checked is: "<<exp1<<endl;
  if(isBalanced(exp1))
  cout<<"Expression is Balanced"<<endl<<endl;
  else
  cout<<"Not balanced expression"<<endl;
  string exp2 = "((()(()()";
  cout<<"Expression 2 to be checked is: "<<exp2<<endl;  
  if(isBalanced(exp2))
  cout<<"Expression is Balanced"<<endl;
  else
  cout<<"Not balanced expression"<<endl;  
  return 0;
} 