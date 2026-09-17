#include<bits/stdc++.h>
using namespace std;

long long root(int x){
    long long high = x, low = 0, mid;
    long long ans = 0;
    while(low <= high){
        mid = (high + low)/2;
        if(mid * mid <= x){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    
    cout<<"The root will be : "<<root(number);
}