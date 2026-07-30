#include<iostream>
using namespace std;
int main(){
    int n,count = 0;
    cin>>n;
    int j = 0;
    for(int i = 0; i <= n; i++){
        while(j < n){
            cout<<"A";
            count++;
            j++;
        }
    }
    cout<<endl<<count;
}

// Time Complexity will be O(n)