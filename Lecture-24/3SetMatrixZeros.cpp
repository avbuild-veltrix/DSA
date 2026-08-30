// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<vector<int>> matrix = {
//     {1, 2, 3},
//     {4, 0, 6},
//     {7, 8, 9}
// };
//     int rows = matrix.size();
//     int columns = matrix[0].size();

//     vector<vector<int>> arr = matrix;

//     for(int i = 0; i < rows; i++){
//         for(int j = 0 ; j < columns; j++){
//             if(matrix[i][j] == 0){
//                 for(int a = 0; a < rows; a++){
//                     arr[a][j] = 0;
//                 }
//                 for(int b = 0; b < columns; b++){
//                     arr[i][b] = 0;
//                 }
//             }
//         }
//     }

//     for(int i = 0; i < rows; i++){
//         for(int j = 0 ; j < columns; j++){
//             cout<<arr[i][j]<<" ";
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {

    int m = matrix.size();
    int n = matrix[0].size();

    vector<bool> rows(m, false);
    vector<bool> columns(n, false);

    // Find all original zeroes
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {

            if(matrix[i][j] == 0) {
                rows[i] = true;
                columns[j] = true;
            }
        }
    }

    // Set marked rows to zero
    for(int i = 0; i < m; i++) {

        if(rows[i] == true) {

            for(int j = 0; j < n; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    // Set marked columns to zero
    for(int i = 0; i < n; i++) {

        if(columns[i] == true) {

            for(int j = 0; j < m; j++) {
                matrix[j][i] = 0;
            }
        }
    }
}

int main() {

    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 0, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    setZeroes(matrix);

    // Print matrix
    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}