#include<iostream>

using namespace std;

int main(){
    char s;
    
  cout<<"Imput any one letter to see if it is uppercase or lowercase: ";
  cin>>s;
  
  if(s > 65 & s < 90){
      cout<<"uppercase";
  }else if(s > 97 & s < 122){
      cout<<"Lowercase";
  }
  
  
  
  
  
  return 0;
}
