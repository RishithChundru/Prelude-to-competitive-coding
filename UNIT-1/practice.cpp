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


