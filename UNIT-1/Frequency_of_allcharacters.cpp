#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    getline(cin,n);
    int length=n.length();
    char arr[]=strcpy(arr[],n);
    string hash[26]={0};
    for(char i:n){
        hash[arr[i]]+=1;
    }
    int q;
    cin>>q;
    while(q--){
        string word;
        cin>>word;
        cout<<hash[word]<<" ";
    }

}