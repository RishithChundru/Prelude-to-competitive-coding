#include<bits/stdc++.h>
using namespace std;

// 0/1 knapsack
int knapsack(int W,vector<int> &weights,vector<int> &values,int n){
    vector<vector<int>> dp(n+1,vector<int>(W+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=W;j++){
            if(weights[i-1]<=j){
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-weights[i-1]]+values[i-1]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][W];
}

int main(){
    int n;
    cin>>n;
    vector<int> weights(n),values(n);
    for(int i=0;i<n;i++){
        cin>>weights[i]>>values[i];
    }
    int W;
    cin>>W;
    cout<<knapsack(W,weights,values,n);
}