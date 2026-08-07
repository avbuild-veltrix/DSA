#include<bits/stdc++.h>
using namespace std;

// void change(vector <int> v){  //Array is passed by reference but vector is passed by value(That's why we need to dereference it to pass by reference).
//     v[2] = 99; //Pass by Value
// }

void change(vector <int> &v){ //Pass by Reference
    v[2] = 99;
}

int main(){
    vector <int> v = {4,3,8,2,9,7} ;
    change(v);
    cout<<v[2];
}