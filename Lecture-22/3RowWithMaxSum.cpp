#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum, maxRow = 0;
    int maxSum = INT_MIN;
    int a[3][4] = {{12,504,23,7},{504,3,67,45},{78,65,34,65}};
    for(int i = 0; i < 3; i++){
        sum = 0;
        for(int j = 0; j < 4; j++){
            sum += a[i][j];
        }
        if(sum > maxSum){
            maxSum = sum;
            maxRow = i;
        }
    }
    cout<<maxSum<<endl<<maxRow;
}