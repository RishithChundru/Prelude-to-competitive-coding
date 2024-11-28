#include<bits/stdc++.h>
using namespace std;

// Naïve Pattern Search Problem
/*void naivepatternsearch(string text,string pattern){
    int m=text.length();
    int n=pattern.length();
    for(int i=0;i<=m-n;i++){
        int j;
        for(j=0;j<n;j++){
            if(text[i+j]!=pattern[j]) {
                break;
            }
        }
        if(j==n) cout<<"pattern found at index "<<i<<endl; 
    }
}
int main(){
    string text;
    getline(cin,text);
   
    string pattern;
    getline(cin,pattern);
    naivepatternsearch(text,pattern);
}
*/


// Checking if Two Strings Are Rotations of Each Other
/*bool isrotate(string s1,string s2){
    if(s1.length()!=s2.length()) return false;
    string temp=s1+s1;
    return temp.find(s2)!=string::npos;
}
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    if(isrotate(s1,s2)) cout<<"The strings are rotations of each other";
    else{ 
        cout<<"The strings are not rotations of each other";
    }
}
*/

// number of rotations

/*int countRotations(const string &s1, const string &s2) {
    // Check if lengths are the same
    if (s1.length() != s2.length())
        return -1;  
    string temp = s1 + s1;
    
    size_t pos = temp.find(s2);
    
    if (pos != string::npos)
        return pos;
  
    return -1;
}

int main() {
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    int rotations = countRotations(s1, s2);
    
    if (rotations != -1)
        cout << "The strings are rotations of each other. Number of rotations: " << rotations << endl;
    else
        cout << "The strings are not rotations of each other." << endl;

    return 0;
}
*/


// Checking if a String Is a Substring of Another String
/*int issubstring(const string &s1,const string &s2){
    size_t a=s1.find(s2);
    if(a!=string::npos){
        return a;
    }
    return -1;
}
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int res=issubstring(s1,s2);
    if(res!=-1) cout<<"The strings are rotations of each other "<<res;
    else{ 
        cout<<"The strings are not rotations of each other";
    }
}
*/


// Splitting a String into Substrings
/*vector<string> splitstring(string str,char delimiter){
    vector<string> substrings;
    stringstream ss(str);
    string temp;
    while(getline(ss,temp,delimiter)){
        substrings.push_back(temp);
    }
    return substrings;
}
int main(){
    string str;
    char delimiter;
    cout<<"Enter string: ";
    getline(cin,str);
    cout<<"Enter delimiter: ";
    cin>>delimiter;
    vector<string> substrings=splitstring(str,delimiter);
    for(string num: substrings){
        cout<<num<<endl;
    }
}
*/


// Count All Occurrences of a Substring
/*int countOccurences(string text,string sub){
    int count=0;
    int pos=text.find(sub);
    while(pos!=string::npos){
        count++;
        pos=text.find(sub,pos+sub.length());
    }
    return count;
}
int main(){
    string text,sub;
    getline(cin,text);
    cin>>sub;
    int res=countOccurences(text,sub);
    cout<<"the substrings are: "<<res<<endl;
}
*/


// Reverse a String
/*string reverse(string str){
    string reversed=str;
    int n=reversed.length();
    for(int i=0;i<n/2;i++){
        swap(reversed[i],reversed[n-i-1]);
    }
    return reversed;
}
int main(){
    string str;
    getline(cin,str);
    string reversed=reverse(str);
    cout<<reversed<<endl;
}*/


// Check if a String is a Palindrome
/*bool ispal(string str){
    int l=0;
    int r=str.size()-1;
    while(l<=r){
        if(!isalnum(str[l])){
            l++;
            continue;
        }
        if(!isalnum(str[r])){
            r--;
            continue;
        }
        if(tolower(str[l])!=tolower(str[r])){
            return false;
        }
        else{
            l++;
            r--;
        }
    }
    return true;
}
int main(){
    string str;
    getline(cin,str);
    bool res=ispal(str);
    if(res) cout<<"it is palindrome";
    else{
        cout<<"it is not palindrome";
    }
}
*/


// Find the Longest Substring Without Repeating Characters
/*int longsubstring(string str){
    unordered_set<char> res;
    int maxlength=0;
    int left=0;
    for(int right=0;right<str.length();right++){
        while(res.find(str[right])!=res.end()){
            res.erase(str[left]);
            left++;
        }
        res.insert(str[right]);
        maxlength=max(maxlength,right-left+1);
    }
    return maxlength;
}
int main(){
    string str;
    getline(cin,str);
    int length=longsubstring(str);
    cout<<"The length of substring without repeating characters is: "<<length;
}*/

/*string longsubstring(string str){
    unordered_set<char> res;
    int maxlength=0;
    int left=0;
    int start=0;
    for(int right=0;right<str.length();right++){
        while(res.find(str[right])!=res.end()){
            res.erase(str[left]);
            left++;
        }
        res.insert(str[right]);
        if(right-left+1>maxlength){
            maxlength=right-left+1;
            start=left;
        }
    }
    return str.substr(start,maxlength);
}
int main(){
    string str;
    getline(cin,str);
    string length=longsubstring(str);
    cout<<length;
}
*/


// find all permutations of string
/*void permutate(string str){
    sort(str.begin(),str.end());
    do{
        cout<<str<<endl;
    }while(next_permutation(str.begin(),str.end()));
}
int main(){
    string str;
    getline(cin,str);
    cout<<"the permutations are: ";
    permutate(str);
}
*/

// Find the First Non-Repeating Character
char firstnonrepeat(string str){
    unordered_map<char,int> res;
    for(char ch:str){
        res[ch]++;
    }
    for(char ch: str){
        if(res[ch]==1){
            return ch;
        }
    }
    return '0';
}
int main(){
    string str;
    getline(cin,str);
    char result=firstnonrepeat(str);
    if(result){
        cout<<"The first non repeating character is: "<<result;
    }
    else{
        cout<<"All characters are repeated";
    }
}