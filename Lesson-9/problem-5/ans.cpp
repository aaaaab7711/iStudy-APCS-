#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    int freq[10] = {0};

    // Count the frequency of each digit
    for (char c : n) {
        int digit = c - '0';
        freq[digit]++;
    }

    int score = 0;

    // Calculate the score
    for (int d = 0; d <= 9; d++) {
        score += d * freq[d];
    }

    cout << score << endl;

    return 0;
}
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string n;
//     cin >> n;

//     int score = 0;

//     for (char c : n) {
//         score += c - '0';
//     }

//     cout << score << endl;

//     return 0;
// }