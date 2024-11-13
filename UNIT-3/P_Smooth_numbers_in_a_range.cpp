#include<bits/stdc++.h>
using namespace std;
bool ispsmooth(int num,int p){
    for(int i=2;i<=p&&num>1;i++){
        while(num%i==0) {
            num/=i;
        }
    }
    return num==1;
}
vector<int> findsmoothnumbers(int low,int high,int p){
    vector<int> res;
    for(int i=low;i<=high;i++){
        if(ispsmooth(i,p)){
            res.push_back(i);
        }
    }
    return res;
}
int main(){
    int low,high,p;
    cout<<"Enter low and high: ";
    cin>>low>>high;
    cout<<"Enter p: ";
    cin>>p;
    vector<int> psmoothnumbers=findsmoothnumbers(low,high,p);
    cout<<"THe smooth numbers are: ";
    for(int num: psmoothnumbers){
        cout<<num<<" ";
    }
    cout<<endl;
}