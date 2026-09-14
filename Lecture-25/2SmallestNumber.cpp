// Find the K th smallest number.
// First Approach
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> nums = {3,55,67,34,98,2,65,4,443};
//     int n = nums.size();
//     int k;
//     cout<<"Enter the Kth term : ";
//     cin>>k;
//     for(int i = 0; i < n; i++){
//         int count = 0;
//         for(int j = 0; j < n; j++){
//             if(nums[j] < nums[i]){
//                 count++;
//             }
//         }
//         if(k-1 == count){
//             cout<<nums[i];
//             return 0;
//         }
//     }
// }

// Second Approach
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> nums = {3,54,72,453,765,2345,9867,2754,76,234,78};
//     int n = nums.size();
//     int k;
//     cin>>k;
//     sort(nums.begin(), nums.end());
//     cout<<nums[k-1];
// }

// Third Approach using Selection Sort
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {3,54,72,453,765,2345,9867,2754,76,234,78};
    int n = nums.size();
    int k;
    cin>>k;
    for(int i = 0; i < k; i++){
        int minIndex = i;
        for(int j = i+1; j < n; j++){
            if(nums[j] < nums[minIndex]){
                minIndex = j;
            }
        }
        swap(nums[i], nums[minIndex]);
    }
    cout<<"Smallest k-th element is "<<nums[k-1];
    return 0;
}