#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n < 0) n += 256;
        for (int i = 7; i >= 0; i--)
            cout << ((n >> i) & 1);// 使用 >>（位元右移）來依次取出 n 的每一個 bit，使用 & 1 來篩選 n 的第 i 位（0 或 1）
        cout << endl;
    }
    return 0;
}
