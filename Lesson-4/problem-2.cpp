#include <iostream>
using namespace std;

int main()
{
    int d;
    cin >> d;

    int fare = 85;

    if (d > 2)
    {
        fare += (d - 2) * 20;
    }

    cout << fare << endl;

    return 0;
}