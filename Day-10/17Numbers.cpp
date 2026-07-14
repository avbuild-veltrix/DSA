#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of rows and columns ";
    cin>>a;
    int num = 1;

    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= i; j++){
            cout<<num<<"  ";
            num++;
        }
        cout<<endl;
    }
}