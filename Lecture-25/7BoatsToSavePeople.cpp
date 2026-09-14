#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> people = {3, 2, 2, 1};
    int limit = 3;

    sort(people.begin(), people.end());

    int i = 0;
    int j = people.size() - 1;
    int count = 0;

    while (i <= j) {

        if (people[i] + people[j] <= limit) {
            i++;
        }

        j--;
        count++;
    }

    cout << "Minimum boats required: " << count << endl;

    return 0;
}