#include <iostream>
#include <string>
using namespace std;

bool checkArray(int array[],int value)
{
	for (int i = 0;i < sizeof(array);i++)
	{
		if (value == array[i])
		{
			return true;
		}
	}
	return false;
}



void functionA(int* A,int B[10],int lengthA,int lengthB)
{
	int totalLength = (lengthA+lengthB);
	int Union[totalLength] = {0};
	cout<<"length of a is"<<sizeof(*lengthA)/sizeof(int);
	




	int position = 0;
	for (int i = 0;i <sizeof(A);i++)
	{
		if (checkArray(Union,A[i]) == false)
		{
			Union[position] = A[i];
			position+=1;
		}
	}

	for (int i = 0;i < sizeof(B);i++)
	{
		if (checkArray(Union,B[i]) == false)
		{
			Union[position] = B[i];
			position+=1;
		}

	}
	int length_of_Union = 0;
	for (int i = 0;i < sizeof(Union);i++)
	{
		if (Union[i] != 0)
		{
			length_of_Union+=1;
			//cout<<"length is "<<length_of_Union;
		}
	}
	int finalUnion[length_of_Union] = {0};
	
	position = 0;
	for (int i = 0;i < sizeof(Union);i++)
	{
		int position = 0;
		if (Union[i] != 0)
		{
			finalUnion[position] = Union[i];
			position+=1;
		}
	}
	
	for (int i = 0;i < sizeof(Union);i++)
	{
		cout<<finalUnion[i]<<",";
		
	}
}



int main(int argc, char** argv)
{
	int ArrayA[10] = {0,4,5,3,6,4,1,4,1,5};
	int ArrayB[10] = {8,6,4,2,4,6,7,5,6,2};
	functionA(ArrayA,ArrayB,10,10);
} 
	

	
