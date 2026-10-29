#include<iostream>
using namespace std;

int main() {
    int x, cnt[6] = {0};
    // 讀入四個骰子點數，統計每個點數出現次數
    for (int i = 0; i < 4; i++) {
        cin >> x;
        cnt[x - 1]++;
    }

    int top[3] = {0}, idx = 2;
    // 把出現過的點數和次數存進 top 陣列
    for (int i = 0; i < 6; i++) {
        if (cnt[i] > 0) {
            int number = i + 1;
            int count = cnt[i];
            top[idx] = number * 10 + count;
            idx--;
        }
        //if (cnt[i]) top[idx--] = (i + 1) * 10 + cnt[i];
    }

    // 拆解 top 陣列為點數與次數
    int a = top[2] / 10, c = top[2] % 10;
    int b = top[1] / 10, c1 = top[1] % 10;
    int d = top[0] / 10, c0 = top[0] % 10;

    // 判斷邏輯
    if (c == 4) {
        cout << "WIN" << endl;
    } else if (c == 3) {
        cout << "R" << endl;
    } else if (c == 2) {
        if (c1 == 2)
            cout << b * 2 << endl;  // 兩對相同
        else
            cout << b + d << endl;  // 一對 + 一顆
    } else if (c == 1) {
        if (c1 == 3)
            cout << "R" << endl;
        else if (c1 == 2)
            cout << a + d << endl;
        else {
            if (c0 == 2)
                cout << a + b << endl;
            else
                cout << "R" << endl;
        }
    }
    return 0;
}
