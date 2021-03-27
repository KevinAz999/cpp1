#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"Print all even numbers until: ";
    cin>>n;

    for(int i=2; i<=n; i++) {
        if(i%2 == 0) {
            cout <<i<<" ";
        }
    }
    return 0;
}
