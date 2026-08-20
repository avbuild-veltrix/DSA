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
    vector<vector<int>> ans(c, vector<int>(r));
    for(int i = 0; i < c; i++){
            if(i%2 == 0){
                for(int j = r-1; j >= 0; j--){
                    cout<<arr[j][i]<<" ";
                }
                cout<<endl;
            }else{
                for(int j = 0; j < r; j ++){
                    cout<<arr[j][i]<<" ";
                }
                cout<<endl;
            }
    }
}