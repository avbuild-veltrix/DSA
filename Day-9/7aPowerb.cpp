#include<iostream>
using namespace std;
int main(){
    int a,b;
    int answer;
    cout<<"Enter the value of base ";
    cin>>a;
    cout<<"Enter the value of exponent ";
    cin>>b;

    // for(int i = 1; i <= b; i++){
    //     answer *= a;
    //     if(a == 1) break;
    // }

    // if(a==0 && a == 0) {
    //     cout<<"Indeterminate Form";
    // }
    // else{
    //     cout<<"The value of a to the power b is "<<answer;
    // }

    if (a == 0 && b == 0) {
        cout << "Indeterminate Form";
    }
    else if (a == 1) {
        cout << "The value of " << a << " to the power " << b << " is 1";
    }
    else {
        int answer = 1;
        for (int i = 1; i <= b; i++) {
            answer *= a;
        }
        cout << "The value of " << a << " to the power " << b << " is " << answer;
    }
}