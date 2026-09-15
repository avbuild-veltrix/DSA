#include <bits/stdc++.h>
using namespace std;

int squareRoot(int x) {

    int low = 0;
    int high = x;
    int ans = 0;

    while(low <= high) {

        int mid = (low + high) / 2;

        if(mid * mid <= x) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return ans;
}

int main() {

    int x;

    cout << "Enter number: ";
    cin >> x;

    cout << "Square root = " << squareRoot(x);

    return 0;
}