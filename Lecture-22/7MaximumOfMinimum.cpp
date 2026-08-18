#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr = {{673,615,763,865},{463,763,345,872},{453,762,363,445}};
    int max = INT_MIN;
    for(int i = 0; i < 3; i++){
    int min = INT_MAX;
        for(int j = 0; j < 4; j++){
            if(min > arr[i][j]){
                min = arr[i][j];
            }
        }
        cout<<"Minimum element of vector arr of row "<< i + 1 <<"is "<<min<<endl;
        if(max < min){
            max = min;
        }
    }
    cout<<"Maximum element of minimum element in each row of vector arr is "<<max;
}