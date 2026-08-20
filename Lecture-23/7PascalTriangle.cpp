// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int r,c;
//     cout<<"Enter the number of rows : ";
//     cin>>r;
//     cout<<"Enter the number of columns : ";
//     cin>>c;
//     vector<vector<int>> arr(r, vector<int>(c,0));
//     for(int i = 0; i < r; i++){
//         for(int j = 0; j <= i; j++){
//             if(j == 0 || j == i){
//                 arr[i][j] = 1;
//             }else{
//                 arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
//             }

//         }
//     }

//     for(int i = 0; i < r; i++){
//         for(int j = 0; j < r-i-1; j++){
//             cout<<"  ";
//         }
//         for(int j = 0; j <= i; j++){
//             cout<<arr[i][j]<<"   ";
//         }
//         cout<<endl;
//     }
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    int r;
    cout<<"Enter the number of rows and columns : ";
    cin>>r;
    vector<vector<int>> arr(r, vector<int>(r));
    for(int i = 0; i < r; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0 || j == i){
                arr[i][j] = 1;
            }else{
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }

        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < r-i-1; j++){
            cout<<"  ";
        }
        for(int j = 0; j <= i; j++){
            cout<<arr[i][j]<<"   ";
        }
        cout<<endl;
    }
}