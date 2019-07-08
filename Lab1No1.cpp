#include <iostream>
#include <string>
using namespace std;


bool isPerfectSquare(int num)
{
	int squares[100];
	
	int i = 1;
	int square = i*i;
	while (square <= num)
	{
		squares[i-1] = square;
		i ++;
		square = i*i;
	}
	
	for (int n = 0;n < i ;n++)
	{
		if (squares[n] == num)
		{
			cout<<num<<" is a perfect square\n";
			return true;
		}
	}
	cout<<num<<" is not a perfect square\n";
	return false;
}

int main()
{
	while (true)
	{
		int number;
		cout<<"Enter a number....\n";
		cin>>number;
		isPerfectSquare(number);
	}
}
