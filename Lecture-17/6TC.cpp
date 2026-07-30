#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    for(int i = 1; i <= n; i++){
        if(i>4){
            continue;
        }
        for(int j = 1; j <=n; j++){
            cout<<"A";
            count++;
        }
    }
    cout<<endl<<count;
}

// Time complexity will be O(n)