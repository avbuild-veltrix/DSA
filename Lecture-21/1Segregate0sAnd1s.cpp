#include<bits/stdc++.h>
using namespace std;

void segregate0and1(vector<int>& arr){
    int left = 0;
    int right = arr.size() - 1;

    while(left<right){

        while(arr[left] == 0 && left < right){
            left++;
        }

        while(arr[right] == 1 && left < right){
            right--;
        }

        if(left < right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {

    vector<int> arr = {0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0};
    segregate0and1(arr);
    cout << "After segregation: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}