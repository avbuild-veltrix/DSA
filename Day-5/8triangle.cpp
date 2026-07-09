#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter the first side ";
    cin>>x;
    cout<<"Enter the second side ";
    cin>>y;
    cout<<"Enter the third side ";
    cin>>z;
    if (x <= 0 || y <= 0 || z <= 0) {
        cout << "Invalid side lengths";
    }else{
        if(x + y > z && x + z > y && y + z > x){
            cout<<"It will form an triangle";
        }
        else{
            cout<<"It will not form an triangle";
        }
    }
}