#include<bits/stdc++.h>
using namespace std;

// Insertion
/*void insertion(vector<int> &arr, int n,int k,int pos ){
    if(pos<1 || pos>n+1){
        return;
    }
    n++;
    for(int i=n-1;i>pos-1;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=k;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main (){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int pos;
    cin>>pos;
    insertion(arr,n,k,pos);
}*/

 
 // deletion
/*void deletion(int arr[],int n,int pos){
    if(pos<1||pos>n+1) return;
    for(int i=pos-1;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
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
    int pos;
    cin>>pos;
    deletion(arr,n,pos);
}
*/


// left rotation

/*void leftrotate(int arr[],int n,int r){
    r=r%n;
    for(int i=0,j=r-1;i<j;i++,j--){
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }
    for(int i=r,j=n-1;i<j;i++,j--){
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }
    for(int i=0,j=n-1;i<j;i++,j--){
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
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
    int r;
    cin>>r;
    r=r%n;
    leftrotate(arr,n,r);
}
*/

// Right rotation

/*void rightrotate(int arr[],int n,int r){
    r=r%n;
    for(int i=0,j=n-r-1;i<j;i++,j--){
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }
    for(int i=n-r,j=n-1;i<j;i++,j--){
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }
    for(int i=0,j=n-1;i<j;i++,j--){
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
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
    int r;
    cin>>r;
    r=r%n;
    rightrotate(arr,n,r);
}*/


// Matrix multiplication

/*int main(){
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    int arr1[r1][c1];
    int arr2[r2][c2];
    int res[r1][c2]={0};
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>arr2[i][j];
        }
    }
    if(c1!=r2){
        cout<<"Matrix multiplication not possible";
        return 0;
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                res[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/

// lower and upper triangular matrix
/*int main(){
    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int>(n));
    vector<vector<int>> l(n,vector<int>(n));
    vector<vector<int>> u(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    // generating lower triangular matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            l[i][j]=a[i][j];
        }
    }

    // generating upper triangular matrix
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            u[i][j]=a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<l[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<u[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
*/

        // spiral matrix

/*void spiral(vector<vector<int>> &arr,int r,int c){
    int top=0;
    int bottom=r-1;
    int left=0;
    int right=c-1;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cout<<arr[top][i]<<" ";
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<arr[i][right]<<" ";
        }
        right--;
        if(top<=bottom){
        for(int i=right;i>=left;i--){
            cout<<arr[bottom][i]<<" ";
        }
        bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cout<<arr[i][left]<<" ";
            }
            left++;
        }
    }
    
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    spiral(arr,n,n);
}
*/


// Find distinct elements common to all rows in a matrix

/*void findcommon(const vector<vector<int>> &arr,int n){
    if(arr.empty()){
        cout<<"array is empty";
    }
    unordered_set<int> commonElements;
    for(int num:arr[0]){
        commonElements.insert(num);
    }

    for(int i=1;i<n;i++){
        unordered_set<int> rowElements(arr[i].begin(),arr[i].end());
        unordered_set<int> Intersection;

        for(int num:commonElements){
            if(rowElements.find(num)!=rowElements.end()){
                Intersection.insert(num);
            }
        }
        commonElements=Intersection;
    }
    if(commonElements.empty()){
        cout<<"no common elements found";
    }
    else {
        for(int num:commonElements){
            cout<<num<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    findcommon(arr,n);
}
*/

/*
struct Node{
    int data;
    Node *next;
};
Node *head=nullptr;
void insert(int data){
    Node *newNode=new Node();
    newNode->data=data;
    newNode->next=head;
    head=newNode;
}
int main(){
    Node *newnode=new Node();
    int data;
    cin>>newnode->data;
    insert(newnode->data);
    Node *temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    int value;
    cin>>value;
    insert(value);
    temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
*/

// K Maximum Sum from Two Arrays

/*int main(){
    int n;
    cin>>n;
    vector<int> arr1(n);
    vector<int> arr2(n);
    cout<<"First array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"second array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    int k;
    cin>>k;
    sort(arr1.begin(),arr1.end(),greater<int>());
    sort(arr2.begin(),arr2.end(),greater<int>());
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr1[i]+arr2[i];
    }
    cout<<"Maximum sum: "<<sum<<endl;
}
*/

// Anagram
/*bool isanagram(string a,string b){
    vector<int> arr(26,0);
    if(a.length()!=b.length()) return false;
    for(int i=0;i<a.length();i++){
        arr[a[i]-'a']++;
    }
    for(int i=0;i<b.length();i++){
        arr[b[i]-'a']--;
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string a;
    string b;
    getline(cin,a);
    getline(cin,b);
    if(isanagram(a,b)) cout<<"strings are anagram";
    else cout<<"strings are not anagrams";
}
*/


//  Missing Characters to Make a String Pangram
/*int main(){
    string str;
    getline(cin,str);
    unordered_set<char> res;
    for(char ch:str){
        if(isalpha(ch)){
            res.insert(tolower(ch));
        }
    }
    int missing=26-res.size();
    cout<<missing;
}*/


// Rearrange Characters So That No Two Adjacent Characters Are Same
/*struct Compare {
    bool operator()(pair<char, int>& a, pair<char, int>& b) {
        return a.second < b.second;
    }
};

bool rearrangeString(string str) {
    unordered_map<char, int> freq;
    for (char c : str) {
        freq[c]++;
    }

    priority_queue<pair<char, int>, vector<pair<char, int>>, Compare> maxHeap;
    for (auto& entry : freq) {
        maxHeap.push(entry);
    }

    string result = "";
    pair<char, int> prev = {'#', -1}; 

    while (!maxHeap.empty()) {
        auto current = maxHeap.top();
        maxHeap.pop();

        result += current.first;
        if (prev.second > 0) {
            maxHeap.push(prev);
        }

        current.second--;
        prev = current;
    }

    return result.length() == str.length();
}

int main() {
    string str = "aaabbcc";
    if (rearrangeString(str)) {
        cout << "Rearranged string: " << str << endl;
    } else {
        cout << "Not possible to rearrange" << endl;
    }

    return 0;
}
*/


//Remove Minimum Number of Characters So That Two Strings Become Anagrams
/*int minRemoveToMakeAnagram(string str1, string str2) {
    unordered_map<char, int> freq1, freq2;
    for (char c : str1) freq1[c]++;
    for (char c : str2) freq2[c]++;

    int count = 0;
    for (auto& entry : freq1) {
        count += abs(entry.second - freq2[entry.first]);
    }
    for (auto& entry : freq2) {
        if (freq1.find(entry.first) == freq1.end()) {
            count += entry.second;
        }
    }

    return count;
}

int main() {
    string str1 = "abcde";
    string str2 = "cab";
    cout << "Minimum characters to remove: " << minRemoveToMakeAnagram(str1, str2) << endl;
    return 0;
}
*/

// Creation of Stack Using Arrays
/*int top=-1;
void push(int stack[],int a,int n){
    if(top==n-1){
        cout<<"stack is full";
    }
    else{
        top++;
        stack[top]=a;
        for(int i=0;i<n;i++){
            cout<<stack[i]<<" ";
        }
    }
}
void pop(int stack[],int n){
    if(top==-1){
        cout<<"No elements to delete";
    }
    else{
        cout<<"deleted element is: "<<stack[top];
        top--;
    }
}
void peek(int stack[]){
    cout<<stack[top];
}

int main(){
    int n;
    cin >>n;
    int stack[n];
    int a;
    cout<<"Enter a element to push: ";
    cin>>a;
    push(stack,a,n);
    pop(stack,n);
    //display(n);
    peek(stack);
}
*/

// Stack using linked list
/*struct Node{
    int data;
    Node* next;
};
void push(struct Node **top,int data){
    Node *newNode=new Node();
    newNode->data=data;
    newNode->next=*top;
    *top=newNode;
}
void pop(struct Node **top){
    if(*top==NULL){
        cout<<"no deletion";
    }
    else{
        struct Node *temp=*top;
        *top=temp->next;
        delete temp;
    }
}
void display(struct Node *top){
    struct Node *temp=top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    struct Node *top=NULL;
    int choice,value;
    while(true){
        cout<<"1.push\n2.pop\n3.display"<<endl;
        cout<<"Enter choice: ";
        cin>> choice;
        switch(choice){
            case 1:
            cin>>value;
            push(&top,value);
            break;
            case 2:
            pop(&top);
            break;
            case 3:
            display(top);
            break;
            default:
            cout<<"Invalid choice";
        }
    }
}
*/


// Two Pointer Technique - Find Pair with Sum Equal to X
/*bool pairsum(vector<int> &arr,int n,int X){
    sort(arr.begin(),arr.end());
    int left=0;
    int right=n-1;
    while(left<=right){
        int sum=arr[left]+arr[right];
        if(sum==X){
            cout<<arr[left]<<" "<<arr[right]<<endl;
            return true;
        }
        else if(sum<X){
            left++;
        }
        else{
            right--;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int X=10;
    if(pairsum(arr,n,X)){
        cout<<" pair found";
    }
    else{
        cout<<"not found";
    }
}
*/

// Count Subarrays with Equal Sum of Elements at Even and Odd Positions
/*int countsubarrays(vector<int> &arr,int n){
    int count=0;
    for(int i=0;i<n;i++){
        int evensum=0;
        int oddsum=0;
        for(int j=i;j<n;j++){
            if((j-i)%2==0){
                evensum+=arr[j];
            }
            else{
                oddsum+=arr[j];
            }
            if(evensum==oddsum){
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
    cout<<countsubarrays(arr,n);
}
*/

// Finding a Peak Element in an Array
/*int peakElement(vector<int> &arr,int n){
    if(n==0) return arr[0];
    if(arr[0]>arr[1]) return arr[0];
    if(arr[n-1]>arr[n-2]) return arr[n-1];
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            return arr[i];
        }
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
    cout<<peakElement(arr,n);
}
*/


// Find Subarray of Length K with Maximum Peak
/*int maxpeak(vector<int> &arr,int n,int k){
    if(n<k){
        return -1;
    }
    int maxpeak=INT_MIN;
    for(int i=0;i<=n-k;i++){
        int peak=*max_element(arr.begin()+i,arr.begin()+i+k);
        maxpeak=max(peak,maxpeak);
    }
    return maxpeak;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=3;
    cout<<maxpeak(arr,n,k);
}
*/


// Replace Every Element of the Array with the Previous Element
/*void replacearray(vector<int> &arr,int n){
   vector<int> res;
   res.push_back(arr[n-1]);
   for(int i=1;i<n;i++){
        res.push_back(arr[i-1]);
   }
   for(int i=0;i<n;i++){
    cout<<res[i]<<" ";
   }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    replacearray(arr,n);
    
}
*/


// Rearrange Positive and Negative Numbers
/*void rearrange(vector<int> &arr,int n){
    vector<int> pos;
    vector<int> neg;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }
    arr.clear();
    for(int i=0;i<neg.size();i++){
        arr.push_back(neg[i]);
    }
    for(int i=0;i<pos.size();i++){
        arr.push_back(pos[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rearrange(arr,n);
}
*/


// Rearrange Array Such that Even Index Elements Are Smaller and Odd Index Elements Are Greater
/*void rearrange(vector<int> &arr,int n){
    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 0 && arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
 
        if (i % 2 != 0 && arr[i] < arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rearrange(arr,n);
    for(int num:arr){
        cout<<num<<" ";
    }
}
*/


// Count Strings with Consecutive Ones

/*int countones(int n){
    if(n==0) return 0;
    vector<int> dp(n+1);
    dp[0]=1;
    dp[1]=2;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    int totalbinary=1<<n;
    int b=countones(n);
    cout<<totalbinary-b;
}
*/


// Check if All Bits Can Be Made Same by a Single Flip for string

/*bool canMakeAllSame(string &s) {
    int zeros = 0, ones = 0;

    for (char ch : s) {
        (ch == '0') ? ++zeros : ++ones;
    }

    // Return true if any of the two counts is 1
    return (zeros == 1 || ones == 1);
}

// Driver code
int main() {
    string s = "101";
    canMakeAllSame(s) ? cout << "Yes\n" : cout << "No\n";
    return 0;
}
*/


// Check if All Bits Can Be Made Same by a Single Flip
/*bool flip(int n){
    int flipped=n^(n>>1);
    return (flipped &(flipped+1))==0;
}
int main(){
    int n;
    cin>>n;
    if(flip(n)){
        cout<<"all bits can be made same by single flip";
    }
    else{
        cout<<"cannot made";    
    }
}
*/


// Reverse a Queue

void reverseQueue(queue<int>& q) {
    stack<int> s;

    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }
    
    // Transfer elements from stack back to queue
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << "Original Queue: ";
    queue<int> q_copy = q;
    while (!q_copy.empty()) {
        cout << q_copy.front() << " ";
        q_copy.pop();
    }

    reverseQueue(q);

    cout << "\nReversed Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}

