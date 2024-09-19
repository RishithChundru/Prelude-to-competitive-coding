#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
    vector<int> arr(26,0);
    if(s.length()!=t.length()) return false;
    for(int i=0;i<s.length();i++){
        arr[s[i]-'a']++;
    }
    for(int i=0;i<t.length();i++){
        arr[t[i]-'a']--;
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    cout<<"Enter 2 string: ";
    string t;
    getline(cin,t);
    if((isAnagram(s,t))){
        cout<<"They are anagrams"<<endl;
    }
    else{
        cout<<"They are not anagrams";
    }
}