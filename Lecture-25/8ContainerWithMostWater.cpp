#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int i = 0;
    int j = height.size() - 1;

    int maxWater = 0;

    while (i < j) {

        int width = j - i;
        int h = min(height[i], height[j]);

        int water = width * h;

        maxWater = max(maxWater, water);

        // Move the shorter line
        if (height[i] < height[j]) {
            i++;
        }
        else {
            j--;
        }
    }

    cout << "Maximum water: " << maxWater << endl;

    return 0;
}