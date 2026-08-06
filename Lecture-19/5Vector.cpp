// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr(5); // It will make an array of 5 elements and all elements will be zero.
//     for(int i = 0; i < 5; i++){
//         cout<<arr[i];
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr(5,12); // It will make an array of 5 elements and all elements will be zero.
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<endl;
    }
    int n = arr.size();
    cout<<n;
}