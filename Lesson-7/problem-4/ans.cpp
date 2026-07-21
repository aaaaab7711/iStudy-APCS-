#include <iostream>

using namespace std;

int main() {
    int r, c;
    if (!(cin >> r >> c)) return 0;
    
    int matrix[10][10];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }
    
    // 輸出轉置矩陣：原本的欄 c 變成現在的列，原本的列 r 變成現在的欄
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            cout << matrix[i][j];
            if (i < r - 1) cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}