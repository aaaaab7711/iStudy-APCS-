#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

// 將字串標準化
string normalize(string s) {
    int shift = s[0] - 'a';

    for (char &c : s) {
        c = (c - 'a' - shift + 26) % 26 + 'a';
    }

    return s;
}

long long countSimilarPairs(vector<string>& words) {
    unordered_map<string, long long> freq;
    long long ans = 0;

    for (string word : words) {
        string key = normalize(word);

        // 目前已經出現多少個相同的標準化字串
        ans += freq[key];

        freq[key]++;
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<string> words(n);

    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    cout << countSimilarPairs(words) << '\n';

    return 0;
}