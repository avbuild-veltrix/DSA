#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>& nums, int i, int j) {
    while(i < j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;

        i++;
        j--;
    }
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size();

    k = k % n;

    // Step 1: Reverse the entire array
    reverseArray(nums, 0, n - 1);

    // Step 2: Reverse the first k elements
    reverseArray(nums, 0, k - 1);

    // Step 3: Reverse the remaining elements
    reverseArray(nums, k, n - 1);
}

int main() {

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};

    int k = 3;

    rotate(nums, k);

    cout << "Rotated array: ";

    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}