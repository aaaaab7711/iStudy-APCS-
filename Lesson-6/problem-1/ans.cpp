#include <iostream>

int main() {
    int password;
    
    // 用 while 連續讀取輸入
    while (std::cin >> password) {
        if (password == 777 || password % 7 == 0) {
            std::cout << "Access Granted\n";
            break;
        } else {
            std::cout << "Access Denied\n";
        }
    }
    return 0;
}