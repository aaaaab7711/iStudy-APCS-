#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int nums[30000];

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        if (count == 1) {
            cout << nums[i] << endl;
            break;
        }
    }

    return 0;
}