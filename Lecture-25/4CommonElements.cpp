#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> a = {3, 4, 2, 2, 4};
    vector<int> b = {3, 2, 2, 7};

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
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    cout << "Common elements: ";

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}