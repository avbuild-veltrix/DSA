#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, t;
    cout<<"Enter first string ";
    getline(cin, s);
    cout<<"Enter second string ";
    getline(cin, t);
    if(s.length() != t.length()){
        cout<<"False";
        return 0;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s == t){
        cout<<"True";
        return 0;
    }else{
        cout<<"False";
        return 0;
    }
    return 0;
}