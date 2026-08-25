#include <iostream>
using namespace std;
int main()
{
    long long num;
    cin >> num;
    for (long long i = 1; i * i <= num; i++)
    {
        if (i * i == num)
        {
            cout << "true" << endl;
            return 0;
        }
    }
    cout << "false" << endl;
    return 0;
}