// //Method - 1 -> Nested Loops

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s = "Kartikkk";
//     int max = 0;
//     char ans;
//     for(int i = 0; i < s.length(); i++){
//         int count = 0;
//         for(int j = 0; j < s.length(); j++){
//             if(s[i] == s[j]){
//                 count++;
//             }
//         }
//         if(max < count){
//             max = count;
//             ans = s[i];
//         }
//     }
//     cout<<"Most frequent character is "<<ans<<endl;
//     cout<<"Total frequency is "<<max;
// }

// // Method - 2 -> Frequency Array.

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s = "Kartikkk";
//     int freq[256] = {0};
//     for(int i = 0; i < s.length(); i++){
//         freq[s[i]]++;
//     }
//     int maxFreq = 0;
//     char ans;
//     for(int i = 0; i < 256; i++){
//         if(maxFreq < freq[i]){
//             maxFreq = freq[i];
//             ans = char(i);
//         }
//     }
//     cout<<"The most frequent character is "<<ans<<endl;
//     cout<<"The total frequency of the "<<ans<<" is "<<maxFreq;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "kartikkk";
    sort(s.begin(), s.end());
    // cout<<s;
    int count = 1, max = 0;
    char ans = s[0];

    for(int i = 1; i < s.length(); i++){
        if(s[i] == s[i-1]){
            count++;
        }else{
            count = 1;
        }
        if(count > max){
            max = count;
            ans = s[i];
        }
    }
    cout<<"The most frequent character is "<<ans<<" which occured "<<max<<" times."<<endl;

    return 0;
}