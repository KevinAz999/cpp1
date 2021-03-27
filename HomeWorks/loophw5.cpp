#include <iostream>

using namespace std;

int main() {

    int i, n;

    cout << "Print all odd numbers untill: ";
    cin >> n;

    for(i = 1; i <= n; i++) {
        if(i % 3 == 0) {

            cout << i << " ";

        }
    }

    return 0;
}
