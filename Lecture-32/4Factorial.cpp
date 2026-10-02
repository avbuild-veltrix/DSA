#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int ans = 0;
    if(n == 0 || n == 1){
        return 1;
    }
    return ans = n * fact(n-1);
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fact(n);
    return 0;
}