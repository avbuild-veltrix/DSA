#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n,r;
    // cout<<"R = ";
    // cin>>r;
    // cout<<"N = ";
    // cin>>n;


//     int nFact = 1;
//     for(int i = 1; i <= n; i++){
//         nFact *= i;
//     }
//     int rFact = 1;
//     for(int i = 1; i <= r; i++){
//         rFact *= i;
//     }
//     int nrFact = 1;
//     for(int i = 1; i <= n-r; i++){
//         nrFact *= i;
//     }

//     int nCr = nFact/(rFact*nrFact);
//     cout<<"nCr = "<<nCr<<endl;
//     int nPr = nFact/rFact;
//     cout<<"nPr = "<<nPr<<endl;
// }

int fact(int x){
    if(x<=1){
        return 1;
    }else{
        int fact = 1;
        for(int i = 1; i <= x; i++){
            fact *= i;
        }
        return fact;
    }
}

int main(){
    int n,r;
    cout<<"R = ";
    cin>>r;
    cout<<"N = ";
    cin>>n;

    int nPr = fact(n)/fact(n-r);
    cout<<"nPr = "<<nPr<<endl;
    int nCr = fact(n)/(fact(r)*fact(n-r));
    cout<<"nCr = "<<nCr<<endl;

}