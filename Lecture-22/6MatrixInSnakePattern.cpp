#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> arr = {
        {1, 2, 3},
        {6, 7, 8},
        {11, 12, 13},
        {16, 17, 18}
    };

    int r = arr.size();
    int c = arr[0].size();

    for(int i = 0; i < r; i++){

        if(i % 2 == 0){
            // Even row → left to right
            for(int j = 0; j < c; j++){
                cout << arr[i][j] << " ";
            }
        }
        else{
            // Odd row → right to left
            for(int j = c - 1; j >= 0; j--){
                cout << arr[i][j] << " ";
            }
        }
    }
}