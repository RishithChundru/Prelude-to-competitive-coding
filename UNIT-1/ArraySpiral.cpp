#include<bits/stdc++.h>
using namespace std;

/*
->->->->
       |
|      |
|      |
<-<-<- 
*/
void print_spiral(vector<vector<int>> &a,int r,int c){
    int top=0;
    int bottom=r-1;
    int left=0;
    int right=c-1;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cout<<a[top][i]<<" ";
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<a[i][right]<<" ";
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<a[bottom][i]<<" ";
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cout<<a[i][left]<<" ";
            }
            left++;
        }
    }
}
int main(){
    vector<vector<int>> a={{1,2,3,4},
                             {2,3,4,5},
                             {4,5,6,7},
                             {8,9,2,4}};
    
    print_spiral(a,4,4);
}