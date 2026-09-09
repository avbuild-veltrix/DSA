// #include<bits/stdc++.h>
// using namespace std;

// void print(vector<int>& arr){
//     for(int ele : arr){
//         cout << ele << " ";
//     }
//     cout << endl;
// }

// int main(){
//     vector<int> arr = {5,4,3,2,6,1};
//     int n = arr.size();

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n-1; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }

//     print(arr);
// }

#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &arr){
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}

// int main(){
//     vector<int> arr = {5,4,6,2,7,1,3};
//     int n = arr.size();
//     for(int i = 0; i < n-1; i++){
//         for(int j = 0; j < n-1-j; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
//     print(arr);
// }


int main(){
    vector<int> arr = {5,4,6,2,7,1,3};
    int n = arr.size();
    for(int i = 0; i < n-1; i++){
        bool swaps = false;
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swaps = true;
            }
        }
        if(!swaps){
            break;
        }
    }
    print(arr);
}