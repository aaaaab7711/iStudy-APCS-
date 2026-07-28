#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 使用 reference 傳遞以直接修改原 vector
void processVector(vector<int>& vec) {
    for (int &x : vec) {
        x *= 2;
    }
    reverse(vec.begin(), vec.end());
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    processVector(nums);

    for (int i = 0; i < n; ++i) {
        cout << nums[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}