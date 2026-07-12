#include <iostream>

int main() {
    int n;
    std::cin >> n;
    
    // 外層迴圈控制列數（高度）
    for (int i = 1; i <= n; i++) {
        // 內層迴圈控制每一列要印出幾個星號
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << "\n"; // 每印完一列要換行
    }
    return 0;
}