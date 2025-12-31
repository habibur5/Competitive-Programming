#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if there's a row and column where all values >= X
bool isFeasible(const vector<vector<int>>& matrix, int n, int m, int X) {
    vector<bool> validRows(n, false);
    vector<bool> validColumns(m, false);

    // Check rows
    for (int i = 0; i < n; i++) {
        bool rowValid = true;
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] < X) {
                rowValid = false;
                break;
            }
        }
        validRows[i] = rowValid;
    }

    // Check columns
    for (int j = 0; j < m; j++) {
        bool columnValid = true;
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] < X) {
                columnValid = false;
                break;
            }
        }
        validColumns[j] = columnValid;
    }

    // Now check if there's at least one valid row and one valid column
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (validRows[i] && validColumns[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    int minValue = INT_MAX, maxValue = INT_MIN;

    // Read the matrix and find min and max values
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
            minValue = min(minValue, matrix[i][j]);
            maxValue = max(maxValue, matrix[i][j]);
        }
    }

    // Perform binary search to find the maximum possible X
    int low = minValue;
    int high = maxValue;
    int answer = low;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (isFeasible(matrix, n, m, mid)) {
            answer = mid;
            low = mid + 1;  // Try for a larger value of X
        } else {
            high = mid - 1;  // Try for a smaller value of X
        }
    }

    // Print the result
    cout << answer << endl;

    return 0;
}
