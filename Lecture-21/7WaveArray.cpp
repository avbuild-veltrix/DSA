#include <bits/stdc++.h>
using namespace std;

void sortInWave(vector<int>& arr) {

    for(int i = 0; i < arr.size(); i += 2) {

        if(i > 0 && arr[i] < arr[i - 1]) {
            swap(arr[i], arr[i - 1]);
        }

        if(i < arr.size() - 1 && arr[i] < arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5};

    sortInWave(arr);

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}