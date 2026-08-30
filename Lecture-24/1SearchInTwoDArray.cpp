// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<vector<int>> arr = {
//         {1, 2, 3, 4, 5},
//         {13, 14, 15, 16, 17},
//         {25, 26, 27, 28, 29},
//         {36, 47, 58, 69, 70}
//     };

//     int target = 5;
//     bool found = false;

//     for (int i = 0; i < arr.size(); i++) {
//         for (int j = 0; j < arr[0].size(); j++) {
//             if (arr[i][j] == target) {
//                 found = true;
//                 break;
//             }
//         }
//     }

//     if (found)
//         cout << "Target found";
//     else
//         cout << "Target not found";

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4, 5},
        {13, 14, 15, 16, 17},
        {25, 26, 27, 28, 29},
        {36, 47, 58, 69, 70}
    };

    int target = 5;
    bool found = false;
    int r = 0, c = matrix[0].size()-1;
    while(r < matrix.size() && c >= 0){
        if(matrix[r][c] > target){
            c--;
        }else if(matrix[r][c] < target){
            r++;
        }else{
            found = true;
            break;
        }
    }
    if(found == true){
        cout<<"Element is present";
    }else{
        cout<<"Element is not present";
    }
}