#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = 2;

    int i = 3;
    i = i + 1;
    cout << i << endl;

    // 寫法 A
    double d = (double)a / b;
    cout << d << endl;

    // 寫法 B
    cout << 5.0 / 2 << endl;

    // 寫法 C
    double c = a / b;
    cout << c << endl;
    char e = 'A';
    cout << e << endl;
    cout << e + 1 << endl;
    return 0;
}
