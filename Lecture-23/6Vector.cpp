#include<bits/stdc++.h>
using namespace std;
int main(){
    int r, c;
    cout<<"Enter number of rows ";
    cin>>r;
    cout<<"Enter number of columns ";
    cin>>c;
    int a = 1;
    vector<vector<int>> arr(r, vector<int>(c,0));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            arr[i][j] = a;
            cout<<arr[i][j]<<"  ";
            a++;
        }
        cout<<endl;
    }
}