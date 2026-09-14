// Find the pair of element whose sum is equal to target. Using two pointer method.
#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    sort(arr.begin(), arr.end());

    int i = 0;
    int j = arr.size() - 1;

    while (i < j) {

        int sum = arr[i] + arr[j];

        if (sum == target) {
            cout << "Pair found: "
                 << arr[i] << " + " << arr[j]
                 << " = " << target << endl;
            return 0;
        }
        else if (sum < target) {
            i++;
        }
        else {
            j--;
        }
    }

    cout << "No pair found";

    return 0;
}