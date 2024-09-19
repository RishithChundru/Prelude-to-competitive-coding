#include<bits/stdc++.h>
using namespace std;
void input(int arr[][100],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
}
int main(){
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    if(c1!=r2) return 0;
    int arr1[100][100];
    int arr2[100][100];
    int res[100][100]={0};
    input(arr1,r1,c1);
    input(arr2,r2,c2);
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                res[i][j]=res[i][j]+arr1[i][k]*arr2[k][j];
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