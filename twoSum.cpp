#include <iostream>
#include <vector>
using namespace std;

void twoSum(int size, int arr[], int target){
  int x=0; int prev=0;
  int k,l;
  bool notFound = true;


    for(int i=0; i<size; i++){
      for(int j=i+1; j<size; j++){
          x=target - arr[i]+arr[j];


        if (x<=prev) {
          k=i; l=j;
          prev = x;
        }
        if(arr[j]+arr[i]==target && arr[i] != arr[j]){
          cout<<"\n ["<<i<<","<<j<<"] and the sum is = "<<x<<endl;
          cout<<"\n ["<<k<<","<<l<<"] and the closest sum is = "<<x<<endl;
          notFound = false;
        }
      }
      if (i==size-1 && notFound) {
        cout<<"\n ["<<k<<","<<l<<"] and the closest sum is = "<<prev<<endl;
      }
    }
}

void perform(){
  int* arr = NULL;
  int size, target, input;
  vector<int> dynamo;
  bool canAdd=true;



  cout<<"Enter your array's elements. Enter 0 to stop"<<endl;
  while(canAdd){
    cin>>input;
    if (input==0) {
      canAdd= false;
    }else{
      dynamo.push_back(input);
    }
  }
  cout<<"Enter your target"<<endl;
  cin>>target;

  arr =new int[dynamo.size()];
  for (int i = 0; i < dynamo.size(); i++) {
    arr[i] = dynamo[i];
  }
cout<<"Size ="<<dynamo.size();
  cout<<"Your array is =>";

  for (int i = 0; i <dynamo.size(); i++) {
    cout<<arr[i]<<",";
  }
  twoSum(dynamo.size(), arr, target);
}


int main(){
  perform();
  main();
  return 0;
}
