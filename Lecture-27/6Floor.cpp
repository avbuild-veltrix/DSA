#include <bits/stdc++.h>
using namespace std;

int findFloor(vector<int>& arr, int x) {

    int low = 0;
    int high = arr.size() - 1;
    int ans = -1;

    while(low <= high) {

        int mid = (low + high) / 2;

        if(arr[mid] <= x) {
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

    vector<int> arr = {1, 2, 8, 10, 10, 12, 19};

    int x;
    cout << "Enter x: ";
    cin >> x;

    int index = findFloor(arr, x);

    if(index == -1) {
        cout << "Floor does not exist";
    }
    else {
        cout << "Floor = " << arr[index] << endl;
        cout << "Index = " << index;
    }

    return 0;
}