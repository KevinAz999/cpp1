#include <iostream>

using namespace std;

int main(){
  int num,count = 0;
  
  cin>>num;
  
  for(;num > 0;count++){
      num = num / 10;
  }
  cout<<count;  
  
  
  return 0;
}
