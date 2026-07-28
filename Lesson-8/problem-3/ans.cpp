#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 利用 std::sort 與 std::unique 進行去重與排序
vector<int> getUniqueSorted(vector<int> vec) {
    sort(vec.begin(), vec.end());
    auto it = unique(vec.begin(), vec.end());
    vec.erase(it, vec.end());
    return vec;
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

    vector<int> result = getUniqueSorted(nums);

    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i] << (i == result.size() - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}