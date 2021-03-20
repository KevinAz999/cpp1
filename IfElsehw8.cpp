#include <iostream>

using namespace std;

int main()
{
  char l;
  
  cout<<"Enter a LETTER: ";
  cin>>l;
  
  if(l == "a"||"e"||"i"||"o"||"u"||"y"){
    cout<<l<<" is a vowel.";
  }else if(l = "b"||"c"||"d"||"f"||"g"||"h"||"j"||"k"||"l"||"m"||"n"||"p"||"q"||"r"||"s"||"t"||"v"||"w"||"x"||"z"){
      cout<<l<<" is a consonant.";
  }else{
      cout<<"Enter a letter(Your Letter may be capitalized, if so lowercase it.")
  }
  
  
  
  
  return 0;
}
