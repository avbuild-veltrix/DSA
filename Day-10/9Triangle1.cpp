#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of rows ";
    cin>>a;

    for(int i = 0; i <= a; i++){
        for(int j = 0; j <= i; j++){
            cout<<(char)('A' + i)<<"  ";
        }
        cout<<endl;
    }
}