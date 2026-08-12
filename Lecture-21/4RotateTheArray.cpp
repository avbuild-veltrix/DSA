#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {1,2,3,4,5,6,7,8,9,0};

    int k = 4;
    int n = arr.size();

    // Step 1: Reverse first n-k elements
    int i = 0;
    int j = n - k - 1;

    while(i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    // Step 2: Reverse last k elements
    i = n - k;
    j = n - 1;

    while(i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    // Step 3: Reverse entire array
    i = 0;
    j = n - 1;

    while(i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    // Print array
    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}