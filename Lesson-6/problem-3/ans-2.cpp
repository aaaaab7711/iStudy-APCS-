#include <iostream>
using namespace std;

int main() {

    long long N;
    cin >> N;

    long long reverse = 0;

    while(N > 0) {

        int digit = N % 10;
        reverse = reverse * 10 + digit;
        N /= 10;

    }

    cout << reverse << endl;

    return 0;
}