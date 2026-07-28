#include <iostream>
#include <vector>

using namespace std;

// 常數引用傳遞，傳回新的 vector
vector<int> filterEvens(const vector<int>& vec) {
    vector<int> evens;
    for (int x : vec) {
        if (x % 2 == 0) {
            evens.push_back(x);
        }
    }
    return evens;
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

    vector<int> result = filterEvens(nums);

    if (result.empty()) {
        cout << "None\n";
    } else {
        for (size_t i = 0; i < result.size(); ++i) {
            cout << result[i] << (i == result.size() - 1 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}