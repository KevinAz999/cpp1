#include <iostream>

using namespace std;

int main(){
  int limit;
  int sum = 0;
  
  cout<<"Enter limit for even numbers: ";
  cin>>limit;
    // Limit = 10 | sum = 0 | add = 1|
  for(int add = 1; add <= limit; add++){
      if(add%2 == 0){
          sum = sum + add;
      }
  }
  //You need to do the addition opperator only if the added number is even
  
  //AFTER YOU DO THE BODY PART YOU DO UPDATE PART
  //THE LAST THING YOU NEED TO DO IS UPDATE PART
  cout<<sum;
  //I want my output as 10
  
  //2+4+6+8+10
  
  return 0;
  
}
/*Homework
1. write c++ program that calculated multification of all number up untill user input 1*2*3*4*5 = 120
2.https://codeforwin.org/2015/06/c-program-to-print-table-of-any-number.html
3.https://codeforwin.org/2015/06/c-program-to-print-sum-of-all-odd-numbers-between-1-to-n.html
*/


