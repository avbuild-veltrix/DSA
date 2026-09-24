#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string ";
    getline(cin, s);
    cout << typeid(s).name() << endl;
    int n = stoi(s);
    cout<<n<<" ";
    cout << typeid(n).name() << endl;
}