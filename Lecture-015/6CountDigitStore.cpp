#include<iostream>
using namespace std;
int count(int n, int* ptr){
    int count = (n == 0) ? 1 : 0;
    while(n != 0){
        count++;
        n/=10;
    }
    *ptr = count; 
}
int main(){
    int c = 0,n;
    cin>>n;
    count(n, &c);
    cout<<c;
}