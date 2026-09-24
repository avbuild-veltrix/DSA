// With stoi.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string arr[] = {"23434", "87435","6734","26545","53445"};
//     string max = arr[0];
//     for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
//         if(stoi(arr[i]) > stoi(max)){
//             max = arr[i];
//         }
//     }
//     cout<<"String with maximum value is "<<max<<endl;
// }

// Without stoi.
#include<bits/stdc++.h>
using namespace std;

string biggerNumber(string s1, string s2){
    int i = 0;
    while(s1[i] == '0'){
        i++;
    }
    int s1_Real_Length = s1.length()-1;
    int j = 0;
    while(s1[j] == '0'){
        j++;
    }
    int s2_Real_Length = s2.length()-1;
    if(s1_Real_Length > s2_Real_Length){
        return  s1;
    }else if(s1_Real_Length < s2_Real_Length){
        return s2;
    }else{
        while(i < s1.length() && j < s2.length() && s1[i] == s2[j]){
            i++;
            j++;
        }
        if(i == s1.length() || j == s2.length()){
            return s1;
        }else if(s1[i] > s2[j]){
            return s1;
        }else{
            return s2;
        }
    }
}

int main(){
    string arr[] = {"23434", "87435","6734","26545","53445"};
    string max = arr[0];
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        max = biggerNumber(arr[i], max);
    }
    cout<<"String with maximum value is "<<max<<endl;
}