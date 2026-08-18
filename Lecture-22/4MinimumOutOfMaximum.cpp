#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4][4] = {{34,54,453,56},{54,34,67,32},{54,34,67,78},{354,67,34,65}};
    int min = INT_MIN;
    for(int i = 0; i < 4; i++){
        int max = INT_MIN; 
        for(int j = 0; j < 4; j++){
            if(max < arr[i][j]){
                max = arr[i][j];
            }
        }
        cout << "Maximum of row " << i << " = " << max << endl;
        if(min < max){

        }
    }
}