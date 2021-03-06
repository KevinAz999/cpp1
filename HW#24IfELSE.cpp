#include <iostream>

using namespace std;

int main() {
    double n;
    
    cout<<"Enter the number of the month: ";
    cin>>n;
    
    if(n == 1 |n == 3 |n == 5 |n == 7 |n == 9 | n == 11 ){
        cout<<"Month number "<<n<<" has 31 days";
    }else if(n == 2 |n == 4 |n == 6 |n == 8 |n == 10 | n == 12 ){
        cout<<"Month number "<<n<<" has 30 days";
    }else{
        cout<<"Is this even a number";
    }
    cout<<endl;
    
    return 0;
}
