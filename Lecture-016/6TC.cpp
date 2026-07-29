#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    for(int i = 1; i <= n; i*=3){
            count++;
    }
    cout<<count<<endl;
}
// Time Complexity will be logn to the base 3. We can ignore the base and we can justsay that Time Complexty will be logn