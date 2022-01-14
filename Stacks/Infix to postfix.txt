#include<bits/stdc++.h>
using namespace std;

template<class S>
struct Node{
  S data;
  Node<S> *next;
};
template<class S>
class Stack{
  private:
  Node<S> *top;
  public:
  Stack(){
    top = NULL;
  }
  void push(S data){
    Node<S> *node = new Node<S>();
    node->data = data;
    node->next = NULL;
    node->next = top;
    top = node;
  }
  S pop(){
    Node<S> *temp = top;
    S data;
    if(!temp){
      cout<<endl<<"Entire Stack chosen is NULL"<<endl;
      return -1;
    }
    data = top->data;
    top = top->next;
    delete temp;
    return data;
  }
  bool isEmpty(){
    return top == NULL;
  }
  S peek(){
    if(isEmpty()){
      cout<<endl<<"Stack Empty"<<endl;
      return -1;
    }
      return top->data;
  }
};
int precedence (char c){
  if(c == '^')
  return 3;
  else if (c == '/' && c == '*')
  return 2;
  else if (c == '+' && c == '-')
  return 1;
return -1;
}
string infixToPostfix(string s){
  Stack<char> *stack = new Stack<char>();
  string result;
  for (int i=0; i<s.length();i++) {
    char ch = s[i];
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
      result += ch;
    }
      else if(ch == '('){
        stack->push('(');
      }
      else if (ch == ')'){
        while(!stack->isEmpty() && stack->peek() != '('){
          result += stack->pop();
        }
          stack->pop();
      }
      else{
        while(!stack->isEmpty() && precedence(s[i]) <= precedence(stack->peek())){
          result += stack->pop();
        }
        stack->push(ch);
      }
  }
  while (!stack->isEmpty()){
    result += stack->pop();
  }
  return result;
}

int main() {

  string exp = "a+b*(c^d-e)^(f+g*h)-i";

  cout << "Given expression :\n";
  cout << exp << "\n\n";

  cout << "After Conversion : \n";
  cout << infixToPostfix(exp);

}