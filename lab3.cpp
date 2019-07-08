#include <iostream>
#include <string>
using namespace std;

void sequenceFunction(int lowerLimit,int upperLimit,int interval)
{
	int sequenceLength = upperLimit-lowerLimit+1;
	int sequence[sequenceLength] = {0};
	int finalSequence[sequenceLength] = {0};
	for (int i = lowerLimit;i <= upperLimit;i++)
	{
		sequence[i-lowerLimit] = i;
	}

	int position = 0;
	for (int i = 0;i < sequenceLength;i++)
	{
		if ((i+1)%interval == 0)
		{
			finalSequence[position] = sequence[i];
			position += 1;
		}
	}
	for (int i = 0;i < sequenceLength;i++)
	{
		if (finalSequence[i] != 0)
		{
			cout<<finalSequence[i]<<",";

		}
	}




}

int main(int argc, char** argv) {
	while (true)
	{
		int lower,upper,interval;
		cout<<"\nEnter the lower limit...\n";
		cin>>lower;
		cout<<"Enter the upper limit...\n";
		cin>>upper;
		cout<<"Enter the interval...\n";
		cin>>interval;
		sequenceFunction(lower,upper,interval);
	}


}
