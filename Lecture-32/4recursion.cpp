// Printing 1 to n.

#include<bits/stdc++.h>
using namespace std;

int n;

void print(int n){
    if(n == 0){
        return;
    }
    print(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The numbers are : ";
    print(n);
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// void print(int x, int n){
//     if(x > n){
//         return;
//     }
//     cout<<x<<" ";
//     print(x+1, n);
// }

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     print(1, n);
//     return 0;
// }