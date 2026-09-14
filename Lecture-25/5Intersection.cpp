#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> a = {1, 2, 2, 3};
    vector<int> b = {2, 2, 4};

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> ans;

    int i = 0;
    int j = 0;

    while (i < a.size() && j < b.size()) {

        if (a[i] < b[j]) {
            i++;
        }
        else if (a[i] > b[j]) {
            j++;
        }
        else {

            // Avoid duplicate elements
            if (ans.empty() || ans.back() != a[i]) {
                ans.push_back(a[i]);
            }

            i++;
            j++;
        }
    }

    cout << "Intersection: ";

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}