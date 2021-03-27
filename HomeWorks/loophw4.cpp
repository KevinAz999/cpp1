#include <iostream>

using namespace std;

int main() {

    int i;
    int n;

    cout << "Print all even numbers until: ";
    cin >> n;

    for(i = 2; i <= n; i++) {
        if(i % 2 == 0) {

            cout << i << " ";

        }
    }

    return 0;
}
