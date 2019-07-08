#include <iostream>
#include <math.h>
using namespace std;

void sequenceFunction(int upper, int lower, int sequence){
  int start=lower;

  while (start<upper) {
    cout<<start<<",";
    start += sequence;
  }
}

int main() {
  while (true)
	{
		int lower,upper,interval;
		cout<<"\nEnter the lower limit...\n";
		cin>>lower;
		cout<<"Enter the upper limit...\n";
		cin>>upper;
		cout<<"Enter the interval...\n";
		cin>>interval;
		sequenceFunction(upper,lower,interval);
	}
  return 0;
}
