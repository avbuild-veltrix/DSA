// #include<bits/stdc++.h>
// using namespace std;

// int A_to_power_B(int a, int b){
//     if(a == 0 && b == 0){
//         cout<<"Not Defined";
//         return -1;
//     }
//     if(b == 0){
//         return 1;
//     }
//     if(a == 0){
//         return 0;
//     }
//     return a * A_to_power_B(a, b - 1);
// }

// int main(){
//     int a, b;
//     cout <<"Enter the number A and B : ";
//     cin>>a>>b;

//     cout<<"A to power B will be : "<<A_to_power_B(a, b);

//     return 0;
// }

// Trying to reduce time complexity.

#include<bits/stdc++.h>
using namespace std;

long long A_to_power_B(int a, int b){
    if(a == 0 && b == 0){
        cout<<"Not Defined";
        return -1;
    }
    if(b == 0){
        return 1;
    }
    if(a == 0){
        return 0;
    }
    long long half = A_to_power_B(a, b/2);
    if(b % 2 == 0) {
        return half * half;
    }
    else {
        return a * half * half;
    }
}

int main(){
    int a, b;
    cout <<"Enter the number A and B : ";
    cin>>a>>b;

    cout<<"A to power B will be : ";
    cout<<A_to_power_B(a, b);

    return 0;
}