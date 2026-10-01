// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s = "1234";
//     int sum = 0;
//     for(int i = 0; i < s.length(); i++){
//         for(int j = i; j < s.length(); j++){
//             int num = 0;
//             for(int k = i; k <= j; k++){
//                 stoi(s[k]);
//                 sum += s[k];
//                 // num = num * 10 + (s[k] - '0');
//             }
//             // sum += num;
//         }
//     }
//     cout<<"Sum of all substrings : "<<sum;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "1234";
    int n = s.length();
    int num = 0, sum = 0;
    for(int i = 0; i < n; i++){
        num = num * 10 + (s[i] - '0') * (i + 1);
        sum += num;
    }
    cout<<sum;
}