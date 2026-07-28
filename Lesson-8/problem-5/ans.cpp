#include <iostream>
#include <vector>

using namespace std;

// 順時針旋轉 90 度函式
// 原矩陣 (r, c) 旋轉後會變成 (c, N - 1 - r)
vector<vector<int>> rotateMatrix(const vector<vector<int>>& mat) {
    int n = mat.size();
    vector<vector<int>> rotated(n, vector<int>(n));
    
    for (int r = 0; r < n; ++r) {
        for (int c = 0; c < n; ++c) {
            rotated[c][n - 1 - r] = mat[r][c];
        }
    }
    return rotated;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    vector<vector<int>> result = rotateMatrix(matrix);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << result[i][j] << (j == n - 1 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}