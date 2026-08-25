#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int i = a.length() - 1;
    int j = b.length() - 1;
    int carry = 0;

    string result;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }

        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }

        result += char('0' + (sum % 2));
        carry = sum / 2;
    }

    reverse(result.begin(), result.end());

    cout << result << endl;

    return 0;
}