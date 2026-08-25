#include <iostream>
using namespace std;

int main() {
    long long num;
    cin >> num;

    long long left = 1;
    long long right = num;

    while (left <= right) {
        long long mid = left + (right - left) / 2;

        if (mid * mid == num) {
            cout << "true" << endl;
            return 0;
        }
        else if (mid * mid < num) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    cout << "false" << endl;

    return 0;
}