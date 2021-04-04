#include <iostream>

using namespace std;

int main(){
  int limit;
  int sum = 0;
  
  cout<<"Enter limit for even numbers: ";
  cin>>limit;
    // Limit = 10 | sum = 0 | add = 1|
  for(int add = 1; add <= limit; add++){
      sum = sum + add;
  }
  //You need to do the addition opperator only if the added number is even
  
  //AFTER YOU DO THE BODY PART YOU DO UPDATE PART
  //THE LAST THING YOU NEED TO DO IS UPDATE PART
  cout<<sum;
  //I want my output as 10
  
  //2+4+6+8+10
  
  return 0;
  
}
