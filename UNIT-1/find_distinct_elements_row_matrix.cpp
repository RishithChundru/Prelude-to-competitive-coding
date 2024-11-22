#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void findCommonElements(const vector<vector<int>>& matrix) {
    if (matrix.empty()) {
        cout << "No common elements found." << endl;
        return;
    }

    // Initialize the set with the elements of the first row
    unordered_set<int> commonElements;
    for (int num : matrix[0]) {
        commonElements.insert(num);
    }

    // Intersect the set with elements of each subsequent row
    for (int i = 1; i < matrix.size(); i++) {
        unordered_set<int> rowElements(matrix[i].begin(), matrix[i].end());
        unordered_set<int> intersection;

        // Find the intersection between the current row and the common set
        for (int num : commonElements) {
            if (rowElements.find(num) != rowElements.end()) {
                intersection.insert(num);
            }
        }

        // Update commonElements to be the intersection
        commonElements = intersection;
    }

    // If commonElements is empty, print no common elements
    if (commonElements.empty()) {
        cout << "No common elements found." << endl;
    } else {
        cout << "Common elements in all rows: ";
        for (int num : commonElements) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    findCommonElements(matrix);

    return 0;
}
