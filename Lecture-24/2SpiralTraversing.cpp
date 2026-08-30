#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4, 5},
        {13, 14, 15, 16, 17},
        {25, 26, 27, 28, 29},
        {36, 47, 58, 69, 70}
    };

    vector<int> arr;
    int min_r = 0, min_c = 0;
    int max_r = matrix.size() - 1;
    int max_c = matrix[0].size() - 1;
    
    while(min_r <= max_r && min_c <= max_c){
        for(int i = min_c; i <= max_c; i++){
            arr.push_back(matrix[min_r][i]);
        }
        min_r++;

        for(int i = min_r; i <= max_r; i++){
            arr.push_back(matrix[i][max_c]);
        }
        max_c--;

        for(int i = max_c; i >= min_c; i--){
            arr.push_back(matrix[max_r][i]);
        }
        max_r--;

        for(int i = max_r; i >= min_r; i--){
            arr.push_back(matrix[i][min_c]);
        }
        min_c++;

    }

    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}