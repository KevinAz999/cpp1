#include <iostream>

using namespace std;

int main(){
  int num,last;
  
  cin>>num;//3245
  
  last = num % 10;
  
  for(;num > 10;){
      num = num/10;//num = 3
  }
 
  cout<<"Sum of First and Last digits is "<<num + last;
  return 0;
}
