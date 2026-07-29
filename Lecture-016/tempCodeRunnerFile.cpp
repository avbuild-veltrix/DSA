#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        cout<<"A";
        for(int j = 2; j <= n; j++){
            cout<<j;
        }
    }
}