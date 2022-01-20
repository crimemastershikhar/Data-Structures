#include <iostream>
using namespace std;

void fibonacci(int n)
{
	int a1 = 0;
	int a2 = 1;
	long int result;
	for(int i = 0; i < n; i++)
	{
		if(i <= 1)
		{
			result = i;
		}
		else
		{
			result = a1 + a2;
			a1 = a2;
			a2 = result;
		}
		cout<<result<<" ";
	}
}

int main() 
{
	int n;
  cout<<"Enter number till which you want fib series "<<endl;
	cin>>n;
	cout<<"Fibonacci series is: "<<endl;
	fibonacci(n);
} 