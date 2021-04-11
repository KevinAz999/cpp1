#include <iostream>

using namespace std;

int main(){
    int num;
    int mult=1;
  
    cout<<"Enter Number for Table: ";
    cin>>num;
  
    while (mult <= 10){
        cout<<num<<"*"<<mult<<"="<<num*mult<<endl;;
        mult++;
    }
  
  
  
  return 0;
}
