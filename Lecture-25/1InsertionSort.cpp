#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {7,3,6,9,4,1,8,2,5};
    for(int ele : arr){
        cout<<ele<<" -> ";
    }
    cout<<"End"<<endl;
    int n = arr.size();
    for(int i = 1; i < n; i++){
        int j = i;
        while(j > 0 && arr[j] < arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
    for(int ele : arr){
        cout<<ele<<" -> ";
    }
    cout<<"End";
}