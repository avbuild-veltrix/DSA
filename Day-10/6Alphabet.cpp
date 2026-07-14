#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number of rows ";
    cin>>a;

    if(a<=26){
        for(int i = 1; i<=a; i++){
        for(int j = 1; j <= a; j++){
            if(i%2!=0){
                cout<<(char)('a' - 1 + i)<<" ";
            }else{
                cout<<(char)('A'- 1 + i)<<" ";
            }
        }
        cout<<endl;
    }
    }else{
        cout<<"Kartik! you made a mistake!";
    }
}