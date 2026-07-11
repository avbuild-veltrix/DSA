#include<iostream>
using namespace std;
int main(){
    for(int i =1; i<= 10;i++){
        if(i==7){
            continue;
        }
        cout<<i<<" ";
    }
    cout<<endl;
    for(int j =1; j<= 10;j++){
        if(j==7){
            break;
        }
        cout<<j<<" ";
    }
}