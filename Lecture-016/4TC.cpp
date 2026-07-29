#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1; i <= n; i/=2){
        for(int j = 1; j <= i; j++){
            cout<<"A"<<endl;
        }
    }
    int m;
    cin>>m;
    for(int i = 1; i <= m; i*=2){
        for(int j = 1; j <= i; j++){
            cout<<"A"<<endl;
        }
    }
}
// Time Complexity will be logn.