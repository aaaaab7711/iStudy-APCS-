#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    int score[100];
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> score[i];
        sum += score[i];
    }
    
    double avg = (double)sum / n;
    
    cout << "Sum: " << sum << endl;
    cout << "Average: " << fixed << setprecision(1) << avg << endl;
    
    return 0;
}