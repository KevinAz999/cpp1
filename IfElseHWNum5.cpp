#include <iostream>

using namespace std;

int main() {
    double n;
   
    cout<<"Imput a number: ";
    cin>>n;
    
    if(n < 0){
        cout<<n<<" is a negative number!"<<endl;
    }
    else if(n > 0){
        cout<<n<<" is Positive number!"<<endl;
    }
    
    
    return 0;
}
