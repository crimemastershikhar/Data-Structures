#include <iostream>
#include <stack>
using namespace std;

void sortedInsert(stack <int> &s, int x){
  if(s.empty() || x < s.top()){
    s.push(x);
  }
  else{
    int top = s.top();
    s.pop();
    sortedInsert(s,x);
    s.push(top);
  }
}
void sortStack(stack<int> &s){
  if(!s.empty()){
    int top = s.top();
    s.pop();
    sortStack(s);
    sortedInsert(s, top);
  }
}
void print(stack <int> s){
  while (!s.empty()){
    cout << s.top()<< " , ";
    s.pop();
  }
  cout<<endl;
}

int main() {
	stack<int> s;
	int size;
  cout<<"Enter size"<<endl;
	cin>>size;
	cout<<"Enter elements: "<<endl;
	for(int i = 0; i < size; i++)
	{
		int element;
		cin>>element;
		s.push(element);
	}
  sortStack(s);
  cout << "Stack after sorting: ";
  print(s);

  return 0;
} 