#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    string s = to_string(abs(n));
    cout<<"Total digits in the number is "<<s.length();
}