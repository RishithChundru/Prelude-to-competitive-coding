#include<bits/stdc++.h>
using namespace std;

// Job sequencing problem

/*struct Job {
    int id, deadline, profit;
};

bool compare(Job a, Job b) {
    return a.profit > b.profit;
}

void jobsequencing(Job arr[], int n) {
    sort(arr, arr + n, compare);
    vector<int> res(n, -1);
    int totalprofit = 0;

    for (int i = 0; i < n; i++) {
        for (int j = min(n, arr[i].deadline) - 1; j >= 0; j--) {
            if (res[j] == -1) {
                res[j] = arr[i].id;
                totalprofit += arr[i].profit;
                break;
            }
        }
    }

    cout << "Total Profit: " << totalprofit << endl;
    cout << "Job sequence: ";
    for (int i = 0; i < n; i++) {
        if (res[i] != -1) {
            cout << res[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of jobs: ";
    cin >> n;

    Job arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter details for Job " << i + 1 << ":\n";
        cout << "ID: ";
        cin >> arr[i].id;
        cout << "Deadline: ";
        cin >> arr[i].deadline;
        cout << "Profit: ";
        cin >> arr[i].profit;
    }

    jobsequencing(arr, n);
    return 0;
}
*/


//  Job Selection Problem
/*struct Job{
    int id,deadline,profit;
};
bool compare(Job a,Job b){
    return a.profit>b.profit;
}
int jobSelection(Job arr[],int n){
    sort(arr,arr+n,compare);
    vector<bool> res(n,false);
    int totalprofit=0;
    for(int i=0;i<n;i++){
        for(int j=min(n,arr[i].deadline)-1;j>=0;j--){
            if(!res[j]){
                res[j]=true;
                totalprofit+=arr[i].profit;
                break;
            }
        }
    }    
    return totalprofit;
}

int main() {
    Job arr[] = { {1, 4, 20}, {2, 1, 10}, {3, 1, 40}, {4, 1, 30} };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum Profit: " << jobSelection(arr, n) << endl;
    return 0;
}
*/

//  Minimum product subset of an array
/*int minproduct(vector<int> &arr,int n){
    if(n==1) return arr[0];
    int product=1,negcount=0,zerocount=0,maxneg=INT_MIN,minpos=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            minpos=min(minpos,arr[i]);
            product*=arr[i];
        }
        else if(arr[i]<0){
            negcount++;
            maxneg=max(maxneg,arr[i]);
        }
        else{
            zerocount++;
            continue;
        }
    }

    if (zerocount == n || (negcount == 0 && zerocount > 0))
        return 0;

    if (negcount == 0)
        return minpos;

    if (!(negcount & 1) && negcount != 0)
        product = product / maxneg;

    return product;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<minproduct(arr,n);
}
*/

// Maximum Product Subset of an Array
/*int maxProductSubset(vector<int>& arr) {
    int n = arr.size();
    if (n == 1) return arr[0];

    int product = 1, negativeCount = 0, zeroCount = 0, maxNeg = INT_MIN;
    for (int num : arr) {
        if (num < 0) {
            negativeCount++;
            maxNeg = max(maxNeg, num);
            product *= num;
        } else if (num == 0) {
            zeroCount++;
        } else {
            product *= num;
        }
    }

    if (negativeCount % 2 == 1) {
        product /= maxNeg;
    }
    return product;
}

int main() {
    vector<int> arr = {-1, -2, 4, 5};
    cout << "Maximum Product Subset: " << maxProductSubset(arr) << endl;
    return 0;
}
*/

// Activity selection problem
/*struct Activity{
    int start,finish;
};
bool compare(Activity a,Activity b){
    return a.finish<b.finish;
}
void activityselection(Activity arr[],int n){
    sort(arr,arr+n,compare);
    int i=0;
    cout<<"selected activities are: "<<arr[i].start<<" "<<arr[i].finish<<endl;
    for(int j=1;j<n;j++){
        if(arr[j].start>arr[i].finish){
            cout<<arr[j].start<<" "<<arr[j].finish<<endl;
            i=j;
        }
    }
}
int main(){
int n;
cin>>n;
Activity arr[n];
cout<<"Enter start point and End point: ";
    for(int i=0;i<n;i++){
    cin>>arr[i].start;
    cin>>arr[i].finish;
    }
    activityselection(arr,n);
}
*/


// Bin packing problem
/*int binpacking(int arr[],int n,int c){
    int res=0;
    int bins_rem=c;
    for(int i=0;i<n;i++){
        if(arr[i]>bins_rem){
            res++;
            bins_rem=c-arr[i];
        }
        else{
            bins_rem-=arr[i];
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int c;
    cin>>c;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<binpacking(arr,n,c);
}
*/

// Fractional Knapsack Problem
/*struct Item{
    int value,weight;
};
bool compare(Item a,Item b){
    return (double)a.value/a.weight>(double)b.value/b.weight;
}
double knapsack(Item arr[],int n,int W){
    sort(arr,arr+n,compare);
    int currweight=0;
    double totalvalue=0;
    for(int i=0;i<n;i++){
        if(currweight+arr[i].weight<=W){
            currweight+=arr[i].weight;
            totalvalue+=arr[i].value;
        }
        else{
            int remain=W-currweight;
            totalvalue+=arr[i].value*((double)remain/arr[i].weight);
            break;
        }
    }
    return totalvalue;
}
int main(){
    int n;
    cin>>n;
    Item arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter value: ";
        cin>>arr[i].value;
        cout<<"Enter weight: ";
        cin>>arr[i].weight;
    }
    int W;
    cin>>W;
    cout<<knapsack(arr,n,W);
}
*/

// Majority Element
/*int majorityElement(vector<int> &arr,int n){
    unordered_map<int,int>freq;
    for(int num:arr){
        freq[num]++;
        if(freq[num]>n/2) return num;
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
    cout<<majorityElement(arr,n);
}
*/

// Connect N Ropes with Minimum Cost
/*int mincost(vector<int> &arr,int n){
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int num:arr) pq.push(num);
    int totcost=0;
    while(pq.size()>1){
        int first=pq.top();
        pq.pop();
        int second=pq.top();
        pq.pop();
        totcost+=first+second;
        pq.push(first+second);
    }
    return totcost;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<mincost(arr,n);
}
*/


// Coin Change Problem (Greedy)
/*void coinchange(vector<int> &arr,int n,int amount){
    sort(arr.rbegin(),arr.rend());
    int count=0;
    vector<int> res;
    for(int num: arr){
        while(amount>=num){
            amount-=num;
            res.push_back(num);
            count++;
        }
    }
    if(amount==0){
        cout<<"Min coin required are: "<<count<<endl;
        cout<<"Coins used are: ";
        for(int num:res){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"amount can not be made with given coins";
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int amount=30;
    coinchange(arr,n,amount);
}
*/


// C++ program for coin change problem
// using recursion

// sum coins[0...n-1] coins to get sum "sum"
int countRecur(vector<int>& coins, int n, int sum) {
   if(sum==0) return 1;
   if(sum<0 || n==0) return 0;
   return countRecur(coins,n,sum-coins[n-1])+countRecur(coins,n-1,sum);
}

int count(vector<int> &coins, int sum) {
    return countRecur(coins, coins.size(), sum);
}

int main() {
    vector<int> coins = {1, 2, 3};
    int sum = 5;
    cout << count(coins, sum);
    return 0;
}