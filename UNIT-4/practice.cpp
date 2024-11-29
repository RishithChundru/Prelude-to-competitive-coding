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
}*/


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
}
*/



// most frequent word
string mostfreqchar(string str){
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
}

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

// Find no of pairs with difference k

/*int findPairs(vector<int>& nums, int k) {
        if (k < 0) return 0; 
        unordered_map<int, int> freq;
        int count = 0;
        for (int num : nums) {
            freq[num]++;
        }
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        int num = it->first;
        int freq_count = it->second;
            if (k == 0) {
                if (freq_count > 1) {
                    count++;
                }
            } else {
                if (freq.find(num + k) != freq.end()) {
                    count++;
                }
            }
        }

        return count;
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
        cout<<findPairs(arr,k);
    }
*/  


// find peak element 
/*int findpeak(int arr[],int n,int l,int r){
    while(l<=r){
        int mid=l+(r-l)/2;
        if(mid==0||arr[mid-1]<=arr[mid] && arr[mid+1]<=arr[mid]||mid==n-1){
            return mid;
        }
        else if(arr[mid-1]>=arr[mid]||mid>0){
            return findpeak(arr,n,l,mid-1);
        }
        else{
            return findpeak(arr,n,mid+1,r);
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<arr[findpeak(arr,n,0,n-1)]<<endl;
}
*/


// binary search
/*int binarysearch(int arr[],int k){
    int l=0;
    int r=sizeof(arr);
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==k) return mid;
        else if(arr[mid]<k) l=mid+1;
        else r=mid-1;
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
    int target;
    cin>>target;
    if(binarysearch(arr,target)){
        cout<<target<<" is found";
    }
    else{
        cout<<target<<" is not found";
    }
}
*/


// Length of Longest Subarray Having Sum in Given Range [l, r]
/*int longsubarray(vector<int> &arr, int l,int r){
    int maxlength=0,sum=0;
    unordered_map<int,int> a;
    a[0]=-1;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        for(int j=l;j<=r;j++){
            if(a.find(sum-j)!=a.end()){
                maxlength=max(maxlength,i-a[sum-j]);
            }
        }
        if(a.find(sum)==a.end()){
            a[sum]=i;
        }
    }
    return maxlength;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=5;
    int r=10;
    cout<<longsubarray(arr,l,r);
}
*/

// Length and elements of Longest Subarray Having Sum in Given Range [l, r]
/*int subarray(vector<int> &arr,int l,int r){
    int maxl=0,sum=0;
    unordered_map<int,int> res;
    res[0]=-1;
    int start=-1;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        for(int j=l;j<=r;j++){
            if(res.find(sum-j)!=res.end()){
                if(i-res[sum-j]>maxl){
                    maxl=i-res[sum-j];
                    start=res[sum-j]+1;
                }
            }
        }
        if(res.find(sum)==res.end()){
            res[sum]=i;
        }
    }
    if(maxl>0){
        for(int i=start;i<start+maxl;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return maxl;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=5;
    int r=10;
    cout<<"The length is: "<<subarray(arr,l,r);
}
*/


// Print All Subarrays with Sum in a Given Range [l, r]
/*void subarrays(vector<int> &arr,int l,int r){
    int count=0;
    for(int i=0;i<arr.size();i++){
        int sum=0;
        for(int j=i;j<arr.size();j++){
            sum+=arr[j];
            if(sum>=l && sum<=r){
                cout<<"subarray is: ";
                for(int k=i;k<=j;k++){
                    cout<<arr[k]<<" ";
                }
                count++;
                cout<<endl;
            }
        }
    }
    cout<<count;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=5;
    int r=10;
    subarrays(arr,l,r);
}
*/

// Minimum Time Required to Produce m Items
/*int minTime(vector<int> &arr, int m) 
{ 
    int t = 0; 
    while (1) 
    { 
        int items = 0; 
        for (int i = 0; i < arr.size(); i++) {
            items += (t / arr[i]); 
        }
        if (items >= m) {
            return t; 
        }
        t++; 
    } 
} 
int main(){
    int n;
    cin>>n;
    vector<int> machines(n);
    for(int i=0;i<n;i++) cin>>machines[i];
    int m;
    cin>>m;
    cout<<"Minimum time required to produce "<<m <<" items is "<<minTime(machines,m);
}*/