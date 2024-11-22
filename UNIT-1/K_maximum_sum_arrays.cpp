#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

vector<int> kMaxSum(vector<int>& A, vector<int>& B, int K) {
    vector<int> sums;
    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < B.size(); j++) {
            sums.push_back(A[i] + B[j]);
        }
    }

    // Sort the sums in descending order
    sort(sums.rbegin(), sums.rend());

    // Get the top K sums
    vector<int> result;
    for (int i = 0; i < K && i < sums.size(); i++) {
        result.push_back(sums[i]);
    }

    return result;
}

int main() {
    int n, m, K;
    cout << "Enter the size of first array (n): ";
    cin >> n;
    vector<int> A(n);
    cout << "Enter elements of the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Enter the size of second array (m): ";
    cin >> m;
    vector<int> B(m);
    cout << "Enter elements of the second array: ";
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    cout << "Enter the value of K: ";
    cin >> K;

    vector<int> result = kMaxSum(A, B, K);

    cout << "Top " << K << " maximum sums are: ";
    for (int sum : result) {
        cout << sum << " ";
    }
    cout << endl;

    return 0;
}
