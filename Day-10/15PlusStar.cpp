#include<iostream>
using namespace std;
int main(){
    int a;  
    cout<<"Enter the number of rows and columns ";
    cin>>a;

    int c = a/2;

    //a and b must be odd
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= a; j++){
            if(i == c+1 || j == c+1){
                cout<<"*  ";
            }else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}