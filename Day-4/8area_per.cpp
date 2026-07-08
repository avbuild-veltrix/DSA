#include<iostream>
using namespace std;
int main(){
    float a,b,area,perimeter;
    cout<<"Length of the rectangle is ";
    cin>>a;
    cout<<"Breadth of the rectangle is ";
    cin>>b;
    area = a*b;
    perimeter =2*(a+b);
    cout<<"The area of the rectangle is "<<area<<endl;
    cout<<"The perimeter f the rectangle is "<<perimeter<<endl;
    if(area>perimeter){
        cout<<"Area is greater than perimeterof the rectangle";
    }else if(area==perimeter){
        cout<<"Area is equal to the perimeter of the rectangle";
    }else{
        cout<<"Area is less than the perimeter of the rectangle";
    }
}
