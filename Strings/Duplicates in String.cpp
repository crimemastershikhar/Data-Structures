#include <bits/stdc++.h>
using namespace std;

void printDuplicates(string str)
{
    map<char, int> count;
    for (int i = 0; i < str.length(); i++) {
        count[str[i]]++;
    }
    for (auto it : count) {
        if (it.second > 1)
            cout << it.first;
    }
}
int main()
{
  string str;
  cout<<"Enter String with duplicate values"<<endl;
  cin>>str;
  printDuplicates(str);
  return 0;
}