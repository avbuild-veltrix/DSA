//Method - 1 -> Nested Loops

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