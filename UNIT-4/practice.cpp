#include<bits/stdc++.h>
using namespace std;

// iterative binary search
/*int binarysearch(vector<int> &arr, int n,int key){
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]<key) left=mid+1;
        else right=mid-1;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    if(binarysearch(arr,n,key)){
        cout<<key<<" is found";
    }
    else cout<<key<<" is not found";
}
*/

// recursive binary search
/*int binarysearch(vector<int> &arr,int left,int right,int key){
    if(left>right) return -1;
    int mid=left+(right-left)/2;
    if(arr[mid]==key) return mid;
    else if(arr[mid]>key) return binarysearch(arr,left,mid-1,key);
    else return binarysearch(arr,mid+1,right,key);
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    if(binarysearch(arr,0,n-1,key)!=-1){
        cout<<key<<" is found";
    }
    else cout<<key<<" is not found";
}*/


// Search an Element in a Sorted and Rotated Array
/*int search(int arr[],int n,int key){
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==key) return mid;
        else if(arr[left]<=arr[mid]){
            if(key>=arr[left] && key<arr[mid]) right=mid-1;
            else left=mid+1;
        }
        else{
            if(key>arr[mid] && key<=arr[right]){
                left=mid+1;
            }
            else right=mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int result=search(arr,n,key);
    if(result!=-1){
        cout<<"Element found at index "<<result<<endl;
    }
    else{
        cout<<"Element not found";
    }
}*/

// most frequent word
/*string mostfreqchar(string str){
    vector<string> res;
    for(int i=0;i<str.size();i++){
        string word="";
        while(str[i]!=' '){
            word+=str[i];
            i++;
        }
        if(!word.empty()) res.push_back(word);
    }
    for(int i=0;i<res.size();i++){
        for(int j=i+1;j<res.size();i++){
            if(res[i]==res[j]) return res[j];
        }
    }
    return "-1";
}

int main(){
    string str;
    getline(cin,str);
    cout<<mostfreqchar(str);
}*/

// k-most frequent word for string

/*vector<string> findfreq(string str,int k){
    unordered_map<string, int> freq;
    string word="";
    for(char c:str){
        if(c==' '){
            if(!word.empty()){
                freq[word]++;
                word="";
            }
        }
        else{
            word+=c;
        }
    }
    if(!word.empty()) freq[word]++;

    multimap<int,string,greater<int>> sortfreq;
    for(auto &a:freq){
        sortfreq.insert({a.second,a.first}); 
    }

    vector<string> res;
    int count=0;
    for(auto &a:sortfreq){
        if(count<k){
            res.push_back(a.second);
            count++;
        }
        else{
            break;
        }
    }
    return res;
}
int main(){
    string str;
    getline(cin,str);
    int k;
    cin>>k;
    vector<string> result=findfreq(str,k);
    for(const string &word:result){
        cout<<word<<endl;
    }
}
*/

// k-most frequent word of vector

/*static bool myComparator (pair <string, int> &a, pair <string, int> &b)
{
  if (a.second == b.second){
      return a.first < b.first;
    }

  return a.second > b.second;
}

vector <string> frequentWords(vector <string> arr, int K)
{
    unordered_map <string, int> Freq;
    for(auto word: arr){
        Freq[word]++;
    }
    vector <pair<string, int>> temp(Freq.begin(), Freq.end());
    sort (begin(temp), end(temp), myComparator);
    vector <string> result;
    int idx = 0;
    while (idx < K)
    {
      auto it = temp[idx];
      result.push_back(it.first);
      idx++;
    }
  return result;
}
int main()
{
      int N = 3, K = 2;
    vector <string> arr{"car", "bus", "car", "bike"};
    vector <string> result = frequentWords (arr, K);
    for (auto it: result){
        cout << it << endl;
    }
}
*/

//Find a Pair with a Given Difference
/*unordered_set<int> findpair(vector<int> &arr, int k){
    unordered_set<int> res; 
    unordered_set<int> nums(arr.begin(), arr.end());  

    for (int num : arr) {
        if (nums.find(num - k) != nums.end()) {
            res.insert(num);  
            res.insert(num - k);  
        }
        if (nums.find(num + k) != nums.end()) {
            res.insert(num);  
            res.insert(num + k); 
        }
    }
    return res;
    }

    int main(){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int k;
        cin>>k;
        unordered_set<int> res=findpair(arr,k);
        for (auto &a: res){
            cout<<a<<endl;
        }
    }
    */

// Find a pair if it is present or not

/*bool findPairWithDifference(const vector<int>& arr, int k) {
    unordered_set<int> seen;
    for (int num : arr) {
        if (seen.find(num - k) != seen.end() || seen.find(num + k) != seen.end()) {
            return true;
        }
        seen.insert(num);
    }
    return false;
}

int main() {
    vector<int> arr = {1, 8, 12, 5, 3};
    int k = 7;
    if (findPairWithDifference(arr, k)) {
        cout << "Pair found with difference " << k << endl;
    } else {
        cout << "No pair found with difference " << k << endl;
    }
    return 0;
}
*/
