#include <iostream>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int max_val = arr[0], max_idx = 0;
    int min_val = arr[0], min_idx = 0;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
            max_idx = i;
        }
        if (arr[i] < min_val) {
            min_val = arr[i];
            min_idx = i;
        }
    }
    
    cout << "Max: " << max_val << " at index " << max_idx << endl;
    cout << "Min: " << min_val << " at index " << min_idx << endl;
    
    return 0;
}