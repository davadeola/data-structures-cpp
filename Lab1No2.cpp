#include <iostream>
#include <sstream>
#include <string>
#include <math.h>

using namespace std;

int Sum(int array[],int target,int arrLength)
{
	int position = 0;
	int  closestIndices[2];
	int closestVals[2];
	int distance = 10000;
	for (int i = 0;i < arrLength;i++)
	{
		for (int n = 0;n < arrLength;n++)
		{
			if (array[i]+array[n] == target && i != n)
			{
				cout<<"The exact Values are..\n";
				cout<<"Val["<<i<<"] = "<<array[i]<<" , Val["<<n<<"] = "<<array[n]<<"\n\n";
				return 0;
			}
			int new_distance = target-(array[i]+array[n]);
			new_distance = abs(new_distance);
			if (new_distance < distance && i != n)
			{
				closestIndices[0] = i;
				closestIndices[1] = n;

				closestVals[0] = array[i];
				closestVals[1] = array[n];
				distance = new_distance;
			}

		}
	}
	cout<<"The closest values are..\n";
	cout<<"Val["<<closestIndices[0]<<"] = "<<closestVals[0]<<" , Val["<<closestIndices[1]<<"] = "<<closestVals[1]<<"\n\n";
	return 0;
}

int main()
{
	/*while (true)
	{
		int arrLength,target;
		cout<<"What is the length of your array\n";
		cin>>arrLength;
		int array[arrLength];
		cout<<"Input the numbers within your array\n";
		for (int i = 0;i < arrLength;i++)
		{
			cin>>array[i];
		//	cout<<"\n";
		}


		cout<<"Input the target\n";
		cin>>target;
		Sum(array,target,arrLength);
	}*/
	while (true)
	{
		int array[1000] = {0};
		int target;
		string input;
		cout<<"Input your numbers,input 'done' when you have finished inputing your numbers..\n";
		int i = 0;
		while (true)
		{
			cin>> input;

			if (input != "done")
			{
				int number;
				std::istringstream iss (input);
				iss >> number;
				array[i] = number;
				i++;
			}
			else
			{
				break;
			}
		}
		cout<<"Input the target\n";
		cin>>target;
		Sum(array,target,i+1);
	}
}
