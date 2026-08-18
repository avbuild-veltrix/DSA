// Find the minimum element out of maximum element in each row.

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr = {{673,615,763,865},{463,763,345,872},{453,762,363,445}};
    int max = INT_MIN;
    int min = INT_MAX;
    vector<int> kartik = {};
    for(int i = 0; i < 3; i++){
        max = INT_MIN;
        for(int j = 0; j < 4; j++){
            if(max < arr[i][j]){
                max = arr[i][j];
            }
        }
        cout << "Maximum of row " << i + 1 << " = " << max << endl;

        if(min > max){
            min = max;
        }
    }

    cout << "Minimum among row maximums = " << min;

    return 0;
}