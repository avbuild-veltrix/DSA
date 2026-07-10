#include<iostream>
using namespace std;
int main(){
    int x=13;
    string y ;
    y =(x>12)?"X is greater than 12"
        :(x<5)?"X is smaller than 5"
        :(x==5)?"X is equal to 5"
        :"HE";
    cout<<y<<endl;

    int z = 5;

    string result = (z > 12) ? "X is greater than 12"
                    : (z < 5) ? "X is smaller than 5"
                    : (z == 5) ? "X is equal to 5"
                               : "X is between 6 and 12";

    cout << result;

    return 0;
}

