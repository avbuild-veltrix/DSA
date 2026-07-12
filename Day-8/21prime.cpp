#include<iostream>
using namespace std;

int main() {
    int num;
    int factors = 0;

    cout << "Enter the number: ";
    cin >> num;

    if (num <= 1) {
        cout << "Neither Prime nor Composite";
        return 0;
    }

    cout << "Factors: ";

    for (int i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";

            if (i != num / i) {
                cout << num / i << " ";
                factors += 2;
            } else {
                factors += 1;
            }
        }
    }

    cout << "\nTotal Factors = " << factors << endl;

    if (factors == 2)
        cout << "Prime Number";
    else
        cout << "Composite Number";

    return 0;
}