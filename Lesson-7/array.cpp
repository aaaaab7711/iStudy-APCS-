#include <iostream>
using namespace std;

int main()
{
    // 1. 宣告並初始化陣列
    int score[5] = {80, 90, 75, 88, 95};

    // 2. 輸出所有元素
    cout << "Original Array: ";
    for(int i = 0; i < 5; i++)
    {
        cout << score[i] << " ";
    }
    cout << endl;

    // 3. 讀取指定元素
    cout << "score[2] = " << score[2] << endl;

    // 4. 修改元素
    score[2] = 100;

    cout << "After Modification: ";
    for(int i = 0; i < 5; i++)
    {
        cout << score[i] << " ";
    }
    cout << endl;

    // 5. 計算總和
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        sum += score[i];
    }

    cout << "Sum = " << sum << endl;

    // 6. 計算平均
    double average = (double)sum / 5;
    cout << "Average = " << average << endl;

    // 7. 找最大值
    int maximum = score[0];

    for(int i = 1; i < 5; i++)
    {
        if(score[i] > maximum)
            maximum = score[i];
    }

    cout << "Maximum = " << maximum << endl;

    // 8. 找最小值
    int minimum = score[0];

    for(int i = 1; i < 5; i++)
    {
        if(score[i] < minimum)
            minimum = score[i];
    }

    cout << "Minimum = " << minimum << endl;

    // 9. 搜尋指定數字
    int target = 88;
    bool found = false;

    for(int i = 0; i < 5; i++)
    {
        if(score[i] == target)
        {
            cout << target << " Found at index " << i << endl;
            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << target << " Not Found" << endl;
    }

    return 0;
}