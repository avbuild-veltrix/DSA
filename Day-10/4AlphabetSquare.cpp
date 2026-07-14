#include<iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter the number of rows ";
    cin >> a;

    cout << "Enter the number of columns ";
    cin >> b;

    for (int i = 1; i <= a; i++) {
        for (char j = 'A'; j < 'A' + b; j++) {
            cout << j<<" ";
        }
        cout << endl;
    }

    return 0;
}