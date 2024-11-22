#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c;
    cout << "Enter the number of rows and columns: ";
    cin >> r >> c;

    vector<vector<int>> matrix(r, vector<int>(c)), transposed(c, vector<int>(r));

    // Input matrix
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    // Matrix transposition
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }

    // Display transposed matrix
    cout << "Transposed matrix:\n";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
