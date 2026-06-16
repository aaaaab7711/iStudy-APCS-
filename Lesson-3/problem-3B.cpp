#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;

    cout << char('A' + (c - 'A' + 1) % 26);

    return 0;
}