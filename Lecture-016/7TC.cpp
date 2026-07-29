#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    for(int i = 2; i<= n; i*=2){
        for(int j = 1; j <= n; j++){
            count++;
        }
    }
    cout<<count;
}
// Time Complexity will be nlogn