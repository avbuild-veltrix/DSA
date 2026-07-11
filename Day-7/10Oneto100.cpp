//Print number 1 to 100 except 4 multiple
#include<iostream>
using namespace std;
int main(){
    for(int i = 1; i<=100 ;i++){
        if(i%4==0){
            continue;
        }
        cout<<i<<" ";
    }
}