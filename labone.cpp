#include <iostream>
using namespace std;
int calcSum(int n){
  int sum=0;
  while (n>0) {
    int y = n%10;
    sum = sum +y;
    n/=10;
  }
  return sum;
}

int perfectSquare(int num){
  int x=num;
  int z=num;
  // while (x>=10) {
  //   x/=10;
  // }
  // if (x==2 || x==3 || x==7 || x==8) {
  //   return false;
  // }else{
    int sum = calcSum(num);
    if (sum > 9) {
      cout<<calcSum(sum);
    }

  //}
}

int main() {
  perfectSquare(12345);
  return 0;
}
