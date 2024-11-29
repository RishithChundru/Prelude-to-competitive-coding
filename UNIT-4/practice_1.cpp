#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

/*vector<pair<int, int>> findPairsWithDifference(int arr[], int n, int k) {
    unordered_set<int> seen;
    vector<pair<int, int>> result;

    for (int i = 0; i < n; i++) {

        if (seen.find(arr[i-k]) != seen.end()) {
            result.push_back({arr[i], arr[i-k]});
        }
        if (seen.find(arr[i+k]) != seen.end()) {
            result.push_back({arr[i], arr[i+k]});
        }

        seen.insert(arr[i]);
    }

    return result; 
}

int main() {
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the difference to find: ";
    cin >> k;

    vector<pair<int, int>> pairs = findPairsWithDifference(arr, n, k);

    if (!pairs.empty()) {
        cout << "Pairs is:" << endl;
        for (auto &p : pairs) {
            cout << "(" << p.first << ", " << p.second << ")" << endl;
        }
        cout << "Total number of pairs: " << pairs.size() << endl;
    } else {
        cout << "No pairs found with the given difference." << endl;
    }

    return 0;
}
*/




/*int countPairsWithDifference(int arr[], int n, int k) {
    unordered_set<int> seen;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int target1 = arr[i] - k; // arr[i] - x = k -> x = arr[i] - k
        int target2 = arr[i] + k; // x - arr[i] = k -> x = arr[i] + k

        // Check if either of the targets exist in the set
        if (seen.find(target1) != seen.end()) {
            count++;
        }
        if (seen.find(target2) != seen.end()) {
            count++;
        }

        // Insert current element into the set
        seen.insert(arr[i]);
    }

    return count; // Return the total count of pairs
}

int main() {
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the difference to find: ";
    cin >> k;

    int pairCount = countPairsWithDifference(arr, n, k);

    if (pairCount > 0) {
        cout << "Total number of pairs with the given difference: " << pairCount << endl;
    } else {
        cout << "No pairs found with the given difference." << endl;
    }

    return 0;
}
*/


