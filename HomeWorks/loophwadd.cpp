#include <iostream>

using namespace std;

int main(){
  int num,answer=0;
  
  cout<<"Enter number";
  cin>>num;//3245
  
  for(;num > 0;){
      answer = answer + num % 10;//5
      num = num / 10;//num = 324
  }
  
  
  
  return 0;
}

