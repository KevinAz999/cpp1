#include <iostream>

using namespace std;

int main(){
  
    int usernum;
    
    cout<<"Enter the upper number: ";
    cin>>usernum;
    //trying to print all even numbers
    for(int num = 2; num <= usernum; num++){
        if(num % 2 == 0){//checkinf if it is even
            cout<<num<<" ";//if it is even then i printing
        }
    }
    /*
    ==
    <=
    >=
    !=
    <
    >
    Print only when it is even.If it is odd don't print.
    */
    
    
    
    return 0;
}
