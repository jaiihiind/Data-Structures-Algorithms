#include <iostream>
#include <vector>

using namespace std;

// Function to generate Pascal's triangle
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> solution;

    for (int i = 0; i < numRows; ++i) {
        vector<int> row(i + 1, 1); // All 1, then change between accordingly,except 1st & Last of all rows

        for (int j = 1; j < i; ++j) {
            row[j] = solution[i - 1][j - 1] + solution[i - 1][j];
        }
        solution.push_back(row);
    }
    return solution;
}

// Function to display Pascal's triangle with proper spacing
void displayTriangle(const vector<vector<int>> triangle) {
    int numRows = triangle.size();
    for (int i = 0; i < numRows; ++i) {
        // Add spaces before each row to create a pyramid-like structure
        for (int space = 0; space < numRows - i - 1; ++space) {
            cout << " ";
        }
        for (int j = 0; j <= i; ++j) {
            cout << triangle[i][j] << " ";      //har elem. ke bad space print krega.
        }
        cout << endl;
    }
}

int main() {
    int numRows;
    cout << "Enter the number of rows for Pascal's triangle: ";
    cin >> numRows;

    vector<vector<int>> result = generate(numRows);

    // Display the Pascal's triangle with proper spacing
    cout << "Pascal's Triangle:" << endl;
    displayTriangle(result);

    return 0;
}
