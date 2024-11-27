//Find the K Most Frequent Words from a String
#include<iostream>
#include<vector>
using namespace std;
string frequentWord(string str){
    vector<string>hash;
    for(int i=0;i<str.size();i++){
        string word="";
        while(str[i]!=' '){
            word+=str[i];
            i++;
        }
        if(!word.empty()) hash.push_back(word);
    }
    for(int i=0;i<hash.size()-1;i++){
        for(int j=i+1;j<hash.size();j++){
            if(hash[i]==hash[j]) return hash[i];
        }
    }
    return "-1";
}
int main(){
    string str="to jog is the best way to be fit";
    cout<<frequentWord(str);
}