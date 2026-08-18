// Find the maximum of minimum element in 2D array of in the column.

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr = {{673,615,763,865},{463,763,345,872},{453,762,363,445}};
    int max = INT_MIN;
    for(int j = 0; j < 4; j++){
        int min = arr[0][j];
        for(int i = 0; i < 3; i++){
            if(min > arr[i][j]){
                min = arr[i][j];
            }
        }
        cout<<"Minimum element of arr in column "<<j+1<<" is "<< min<<endl;
        if(max < min){
            max = min;
        }
    }
    cout<<"Maximum element of arr in column is "<< max<<endl;
}