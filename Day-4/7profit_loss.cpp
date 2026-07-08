#include<iostream>
using namespace std;
int main(){
    float cost, sell;
    cout<<"Enter the cost price of the product ";
    cin>>cost;
    cout<<"Enter the selling price of the product ";
    cin>>sell;

    if(cost<sell){
        cout<<"Seller has made the profit"<<endl;
        cout<<"The amount of profit is "<<(sell-cost);
    }else if(cost==sell){
        cout<<"Seller has made no profit or no loss";
    }else{
        cout<<"Seller incurred loss"<<endl;
        cout<<"The amount of loss is "<<(cost-sell);
    }

}