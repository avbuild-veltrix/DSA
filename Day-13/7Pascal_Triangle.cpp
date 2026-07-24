// #include<bits/stdc++.h>
// using namespace std;
// int fact(int x){
//     if(x <= 1){
//         return 1;
//     }else{
//         int fact = 1;
//         for(int i = 1; i <= x; i++){
//             fact *= i;
//         }
//         return fact;
//     }
// }

// int nCr(int n, int r) {
//     return fact(n) / (fact(r) * fact(n - r));
// }

// int main(){
//     int m,n,r;
//     cout<<"Enter the value of rows = ";
//     cin>>m;
//     for(int i = 1; i <= m; i++){
//         for(int j = 1; j <= i; j++){
//             if(j==1 || i == n){
//                 cout<<"1"<<" ";
//             }else{
//                 cout<<nCr(i,j)<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
// Output will be-
// 1 
// 1 1 
// 1 3 1 
// 1 6 4 1 
// 1 10 10 5 1 

// #include<bits/stdc++.h>
// using namespace std;
// int fact(int x){
//     if(x <= 1){
//         return 1;
//     }else{
//         int fact = 1;
//         for(int i = 1; i <= x; i++){
//             fact *= i;
//         }
//         return fact;
//     }
// }

// int nCr(int n, int r) {
//     return fact(n) / (fact(r) * fact(n - r));
// }

// int main(){
//     int m,n,r;
//     cout<<"Enter the value of rows = ";
//     cin>>m;
//     for(int i = 0; i <= m; i++){
//         for(int j = 0; j <= i; j++){
//             cout<<nCr(i,j)<<" ";
            
//         }
//         cout<<endl;
//     }
// }
// Output will be-
// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 
// 1 5 10 10 5 1


// #include<bits/stdc++.h>
// using namespace std;
// int fact(int x){
//     int fact = 1;
//     for(int i = 1; i <= x; i++)
//         fact *= i;
//     return fact;
// }

// int nCr(int n, int r){
//     return fact(n)/(fact(n-r)*fact(r));
// }

// int main(){
//     int m;
//     cout<<"Enter the value of rows = ";
//     cin>>m;

//     for(int i = 0; i < m; i++){
//         //For printing spaces
//         for(int j = 0; j < m-i-1; j++){
//             cout<<"  ";
//         }
//         //Printing numbers
//         for(int j = 0; j <= i; j++){
//             cout << nCr(i,j) << " ";
//             cout<<"  ";
//         }
//         cout<<endl;
//     }
// }
// Output will be-
//         1   
//       1   1   
//     1   2   1   
//   1   3   3   1   
// 1   4   6   4   1 






#include<bits/stdc++.h>
using namespace std;
int fact(int x){
    int fact = 1;
    for(int i = 1; i <= x; i++)
        fact *= i;
    return fact;
}

int nCr(int n, int r){
    return fact(n)/(fact(n-r)*fact(r));
}

int main(){
    int n;
    cout<<"Enter the numbr of rows = ";
    cin>>n;

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n-i; j++){
            cout<<"  ";
        }
        for(int j = 0; j <= i; j++){
            cout<<nCr(i,j)<<"   ";
        }
        cout<<endl;
    }
}
// output will be-
//             1   
//           1   1   
//         1   2   1   
//       1   3   3   1   
//     1   4   6   4   1   
//   1   5   10   10   5   1