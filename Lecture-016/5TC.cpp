#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    for(int i = 1; i <= n; i+=i){
            count++;
    }
    cout<<count<<endl;
}

// Time Complexity will be logn