#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void reverseArray(int array[],int arrLength)
{
	int reverseArr[arrLength];
	int n = 0;
	for (int i = arrLength-1;i >= 0;i--)
	{
		reverseArr[n] = array[i];
		n++;
		cout<<"reverse\n";
	}
	array = reverseArr;
}


int arrayToNum(int array[],int arrLength)
{
	int number;
	int n = 0;
	for (int i = arrLength-1;i >= 0;i--)
	{
		number+=array[i]^n;
		n++;
		cout<<"arrToNum\n";
	}
	return number;
	
}

int numToArray(int number,int array[])
{
	int base = 1;
	int power = 1;
	while (number > 0)
	{
		int currNum = 0;
		while (number%(base*10) != 0)
		{
			cout<<"sub is "<<base<<"\n";
			number-=base;
			cout<<"number is "<<number<<"\n";
			currNum += 1;
			cout<<"numToArrWhile\n";
		}
		array[power-1] = currNum;
		power+=1;
		base*=10;
		cout<<"numToArr\n";
	}
	
}


int MainFunction(int array1[],int array2[],int arrLength)
{
	reverseArray(array1,arrLength);
	reverseArray(array2,arrLength);
	int sum = arrayToNum(array1,arrLength) + arrayToNum(array2,arrLength);
	int FinalArray[arrLength] = {0};
	numToArray(sum,FinalArray);
	cout<<"["<<FinalArray[0]<<FinalArray[1]<<FinalArray[2]<<"]";
	
}

int Trim(int array[],int length)
{
	int count = 0;
	for (int i = 0;i < length;i++)
	{
		if (array[i] != 10101)
		{
			count += 1;
		}
	}
	int newArray[count];
	for (int i = 0;i < count;i++)
	{
		newArray[i] = array[i];
	} 
	array = newArray;
	return count;
	
}



int main()
{
	int array[3] = {10101};
	int array2[3] = {10101};
	string input;
	cout<<"Input the first array...type 'done' when finished\n";
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
	cout<<"Input the second array...type 'done' when finished\n";
	i = 0;
	while (true)
	{
		cin>> input;
		
		if (input != "done")
		{
			int number;
			std::istringstream iss (input);
			iss >> number;
			array2[i] = number;
			i++;
		}
		else
		{
			break;
		}
	}
	//Trim(array,1000);
	//int length = Trim(array2,1000);
	MainFunction(array,array2,3);
}

