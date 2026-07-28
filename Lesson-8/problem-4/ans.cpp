#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 計算各視窗最大值
vector<int> maxInWindows(const vector<int>& vec, int k) {
    vector<int> results;
    int n = vec.size();
    for (int i = 0; i <= n - k; ++i) {
        int current_max = vec[i];
        for (int j = 1; j < k; ++j) {
            current_max = max(current_max, vec[i + j]);
        }
        results.push_back(current_max);
    }
    return results;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    vector<int> ans = maxInWindows(nums, k);

    for (size_t i = 0; i < ans.size(); ++i) {
        cout << ans[i] << (i == ans.size() - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}