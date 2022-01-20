#include <iostream>
using namespace std;

int Fact(int n)
{
	if(n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return (n * Fact(n - 1));
	}
}

int main() 
{
	int n;
	cout<<"Enter the range: "<<endl;
	cin>>n;
	cout<<"Factorial of the given range is: "<<endl;
	cout<<Fact(n)<<endl;
} 