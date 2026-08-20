#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15}
    };
    int r = arr.size();
    int c = arr[0].size();
    for(int i = 0; i < c; i++){
      for(int j = 0; j < r; j++){
        if(i > 3){
            cout<<arr[j][i]<<"   ";
        }else{
            cout<<arr[j][i]<<"   ";
        }
      }
      cout<<endl;  
    }
}