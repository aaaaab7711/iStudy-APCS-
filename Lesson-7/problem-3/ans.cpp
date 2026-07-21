#include <iostream>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // 翻轉陣列
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    
    // 印出反轉後的陣列
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // 分離奇偶數並印出
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    
    return 0;
}