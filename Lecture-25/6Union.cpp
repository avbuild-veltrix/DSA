#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> a = {1, 2, 2, 3};
    vector<int> b = {2, 3, 4, 4};

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> ans;

    int i = 0;
    int j = 0;

    while (i < a.size() && j < b.size()) {

        if (a[i] < b[j]) {

            if (ans.empty() || ans.back() != a[i]) {
                ans.push_back(a[i]);
            }

            i++;
        }

        else if (a[i] > b[j]) {

            if (ans.empty() || ans.back() != b[j]) {
                ans.push_back(b[j]);
            }

            j++;
        }

        else {

            if (ans.empty() || ans.back() != a[i]) {
                ans.push_back(a[i]);
            }

            i++;
            j++;
        }
    }

    // Remaining elements of a
    while (i < a.size()) {

        if (ans.empty() || ans.back() != a[i]) {
            ans.push_back(a[i]);
        }

        i++;
    }

    // Remaining elements of b
    while (j < b.size()) {

        if (ans.empty() || ans.back() != b[j]) {
            ans.push_back(b[j]);
        }

        j++;
    }

    cout << "Union: ";

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}