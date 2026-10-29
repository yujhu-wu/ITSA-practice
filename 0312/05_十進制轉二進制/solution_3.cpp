#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n < 0) n += 256; // 處理負數+=256
        cout << bitset<8>(n) << endl; // 直接轉成8位二進位輸出
    }
    return 0;
}
