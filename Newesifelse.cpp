#include <iostream>

using namespace std;

int main(){
  
  int num;
  
  cout<<"Enter a Number that is divisble by 19 and 7: ";
  cin>>num;
  
  while(num%19 != 0 && num%7 != 0){
      cout<<"Enter a Number that is divisble by 19 and 7: ";
  cin>>num;
  }
  
  if(num%19 == 0 && num%7 == 0){
     cout<<"Good Job This number is divisibe by 19 and 7";
  }
  
  
  return 0;
}
