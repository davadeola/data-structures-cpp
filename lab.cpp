#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int perfectSquare(int num){
  int i =1;
  int multiple = i*i;
  while(multiple < num+1) {
    if (multiple == num) {
      cout<<"True"<<"\n";
      break;
    }else{
      i++;
      multiple = i*i;
    }
  }
  if (multiple != num) {
    cout<<"False"<<"\n";
  }
  return 0;
}

int sqr(){
  int a;
  cout<<"Enter a number "<<endl;
  cin>>a;
  int sqr_ = (a^(1/2));
  cout<<sqr<<endl;
  if((sqr_ ^2 ) ==a){

    cout<<"True"<<endl;
  }else{
    cout<<"False"<<endl;
  }
  return 0;
}

int targetGet(int arr[], int target){
  int i=0;
  int m=i+1;
  while(i<5) {
        int now = arr[i]+ arr[m];
        if (arr[m] != arr[i] && now==target) {
          cout<<i<<","<<m;
          break;
        }else if(m>4){
          i++;
          m = i+1;
        }else{
          m++;
        }
  }
  return 0;
}



int main() {
  // cout<<"Enter the number to target "<<endl;
  // int num;
  // cin>>num;
  //perfectSquare(num);
  int arr[] = {2,2,3,1,32};
  //sqr();
  int aa = trunc(25^(2));
  cout<<aa;
//targetGet(arr, num);
//main();
  return 0;
}
