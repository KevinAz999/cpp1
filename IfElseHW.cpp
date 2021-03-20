#include <iostream>

using namespace std;

int main()
{
    char l;
  
    cout<<"Enter a LETTER: ";
    cin>>l;
  
    while(l <= 96 || l >=123){
        cout<<"Enter a lowercase letter: ";
        cin>>l; 
    }
    if(l == 'a'||l =='e'||l =='i'||l =='o'||l =='u'){
        cout<<l<<" is a vowel";
    }else{
        cout<<l<<" is a consonant";
    }

  
    return 0;
}
