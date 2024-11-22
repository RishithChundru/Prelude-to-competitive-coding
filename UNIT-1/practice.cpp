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

void findcommon(const vector<vector<int>> &arr,int n){
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