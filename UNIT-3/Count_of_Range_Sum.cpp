#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int merge(vector<long>& sum, int lower, int upper, int low, int high) {
        if (high - low <= 1) return 0;
        int mid = (low + high) / 2, m = mid, n = mid, count = 0;
        count = merge(sum, lower, upper, low, mid) + merge(sum, lower, upper, mid, high);
        
        for (int i = low; i < mid; i++) {
            while (m < high && sum[m] - sum[i] < lower) m++;
            while (n < high && sum[n] - sum[i] <= upper) n++;
            count += n - m;
        }
        
        inplace_merge(sum.begin() + low, sum.begin() + mid, sum.begin() + high);
        return count;
    }

    int countRangeSum(vector<int>& nums, int lower, int upper) {
        int len = nums.size();
        vector<long> sum(len + 1, 0);
        for (int i = 0; i < len; i++) sum[i + 1] = sum[i] + nums[i];
        return merge(sum, lower, upper, 0, len + 1);
    }
};

int main() {
    int n, lower, upper;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter the lower bound: ";
    cin >> lower;
    cout << "Enter the upper bound: ";
    cin >> upper;

    Solution solution;
    int result = solution.countRangeSum(nums, lower, upper);
    cout << "The count of range sums in the given range is: " << result << endl;

    return 0;
}
