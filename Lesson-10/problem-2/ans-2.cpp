#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    if (num == 0)
        cout << 0 << endl;
    else
        cout << 1 + (num - 1) % 9 << endl;
    return 0;
}