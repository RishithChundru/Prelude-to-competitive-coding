#include<bits/stdc++.h>
using namespace std;
/*Write a program to print all the LEADERS in the array. An element is leader if it is greater than all the elements to its right side.

And the rightmost element is always a leader. For example int the array {16, 19, 4, 3, 8, 3}, leaders are 19, 8 and 3?*/
/*
void findleaders(int arr[],int n){
    for(int i=0;i<n;i++){
        int j;
        for(j=i+1;j<n;j++){
            if(arr[i]<=arr[j]) break;
        }
        if(j==n){
            cout<<arr[i]<<" ";
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
    findleaders(arr,n);
}
*/



/*Maximum difference between two elements such that larger element appears after the smaller number
Given an array arr[] of integers, find out the difference between any two elements such that larger element appears after the smaller number in arr[].

Examples: If array is [2, 3, 10, 6, 4, 8, 1] then returned value should be 8 (Diff between 10 and 2). If array is [ 7, 9, 5, 6, 3, 2 ] then returned value should be 2 (Diff between 7 and 9)

Time Complexity: O(n^2)
Auxiliary Space: O(1)

Use two loops. In the outer loop, pick elements one by one and in the inner loop calculate the difference of the picked element with every other element in the array and compare the difference with the maximum difference calculated so far.
*/

/*int maxdiff(int arr[],int n){
    int max_diff=arr[1]-arr[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]-arr[i]>max_diff){
                max_diff=arr[j]-arr[i];
            }
        }
    }
    return max_diff;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxdiff(arr,n);
}
*/


/* Longest Prefix Suffix
Given a string of character, find the length of longest proper prefix which is also a proper suffix.
Example:
S = abab
lps is 2 because, ab.. is prefix and ..ab is also a suffix.

Input:
First line is T number of test cases. 1<=T<=100.
Each test case has one line denoting the string of length less than 100000.

Expected time compexity is O(N).

Output:
Print length of longest proper prefix which is also a proper suffix.

Example:

Input:
2
abab
aaaa

Output:
2
2*/

/*int lps(string s){
    int n=s.size();
    int lps[n];
    int i=1,j=0;
    lps[0]=0;
    while(i<n){
        if(s[i]==s[j]){
            j++;
            lps[i]=j;
            i++;
        }
        else{
            if(j!=0){
                j=lps[j-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
    return lps[n-1];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<lps(s);
        cout<<endl;
    }
}
*/

/*
check for a pair with given sum
*/

/*pair<int,int> findpair(const vector<int> &arr,int key){
    unordered_set<int> a;
    for(int num:arr){
        int complement=key-num;
        if(a.find(complement)!=a.end()){
            return {complement,num};
        }
        a.insert(num);
    }
    return {-1,-1};
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    pair<int,int>res= findpair(arr,target);
    if(res.first!=-1){
        cout<<"pair found "<<res.first<<" , "<<res.second<<endl;
    }
    else cout<<"pair not found";

}*/


// Move Zeroes to the End of the Array

/*void movezeros(int arr[],int n){
    int nonzero=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[nonzero]=arr[i];
            nonzero++;
        }
    }
    for(int i=nonzero;i<n;i++){
        arr[i]=0;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    movezeros(arr,n);
}
*/


// check array is palindrome or not

/*bool checkpalindrome(int arr[],int n){
    int left=0;
    int right=n-1;
    while(left<right){
        if(arr[left]!=arr[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<checkpalindrome(arr,n);
}*/


// Count the Frequency of Each Element in an Array

/*void countfrequency(vector<int> &arr,int n){
    unordered_map<int,int> frequency;
    for(int num:arr){
        frequency[num]++;
    }
    for(auto &it:frequency){
        cout<<"Element "<<it.first<<"appears "<<it.second<<"times"<<endl;
    }

}
int main(){
    vector<int> arr={1,2,3,3,2,1,4};
    countfrequency(arr,7);
}*/

// check frquency for specific number


/*void countFrequencyOfSpecificElement(const vector<int>& arr, int number) {
    unordered_map<int, int> frequency;

    // Traverse the array and update the frequency of each number
    for (int num : arr) {
        frequency[num]++;
    }

    // Check if the number exists in the frequency map and print its frequency
    if (frequency.find(number) != frequency.end()) {
        cout << "Element " << number << " appears " << frequency[number] << " times." << endl;
    } else {
        cout << "Element " << number << " is not in the array." << endl;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 3, 2, 1, 4};
    int number = 3;  // Change this to the element you want to find the frequency of

    countFrequencyOfSpecificElement(arr, number);

    return 0;
}
*/

