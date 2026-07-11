#include<iostream>
using namespace std;
int main(){
    // int i;
    // cout<<"Enter the number ";
    // cin>>i;
    //  for(int j =1;j<=i;j++){
    //     cout<<j<<endl;
    //     if(j==1){
    //         cout<<"n";
    //     }else{
    //         cout<<"n-"<<j;
    //     }
    //     cout<<endl;
    //  }

    int i,n;
    cout<<"Enter the value of i ";
    cin>>i;
    cout<<"Enter the value of n ";
    cin>>n;

    for(int j =1;j<=i;j++){
        cout<<j<<endl;
        if(n<i){
            continue;
        }else if(i==j){
            cout<<n;
        }else{
            cout<<n-1;
        }
        cout<<endl;
    }
}