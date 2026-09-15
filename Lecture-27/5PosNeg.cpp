#include <bits/stdc++.h>
using namespace std;

int maximumCount(vector<int>& nums) {

    int n = nums.size();

    // Find first element >= 0
    int low = 0;
    int high = n - 1;
    int firstNonNegative = n;

    while(low <= high) {

        int mid = (low + high) / 2;

        if(nums[mid] >= 0) {
            firstNonNegative = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    int neg = firstNonNegative;


    // Find first element > 0
    low = 0;
    high = n - 1;
    int firstPositive = n;

    while(low <= high) {

        int mid = (low + high) / 2;

        if(nums[mid] > 0) {
            firstPositive = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    int pos = n - firstPositive;


    return max(neg, pos);
}

int main() {

    vector<int> nums = {-5, -3, -1, 0, 0, 2, 4};

    int result = maximumCount(nums);

    cout << "Maximum count : " << result << endl;

    return 0;
}