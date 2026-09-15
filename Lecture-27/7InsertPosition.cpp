#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& arr, int target) {

    int low = 0;
    int high = arr.size() - 1;

    while(low <= high) {

        int mid = (low + high) / 2;

        if(arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return low;
}

int main() {

    vector<int> arr = {1, 3, 5, 6};

    int target;

    cout << "Enter target: ";
    cin >> target;

    cout << "Insert position: " << searchInsert(arr, target);

    return 0;
}