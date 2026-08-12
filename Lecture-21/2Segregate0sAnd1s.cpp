#include <bits/stdc++.h>
using namespace std;

void segregate0and1(vector<int>& arr) {
    int i = 0;

    for (int j = 0; j < arr.size(); j++) {

        if(arr[j] == 0){
            swap(arr[i], arr[j]);
            i++;
        }
            
        // if (arr[j] == 0) {
        //     swap(arr[i], arr[j]);
        //     i++;
        // }
    }
}

int main() {

    vector<int> arr = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};

    segregate0and1(arr);

    cout << "After segregation: ";

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}