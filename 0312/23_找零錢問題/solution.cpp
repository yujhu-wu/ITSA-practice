#include <iostream>

using namespace std;

int main()
{
    int n, a1, a2, a3;
    int c1 = 0, c2 = 0, c3 = 0;
    int total = 0;
    int refund = 0;

    // 修正 `scanf()`，改用 `cin`
    char comma; // 用來讀取 `,`
    cin >> n >> comma >> a1 >> comma >> a2 >> comma >> a3;

    // 計算總價
    total = a1 * 15 + a2 * 20 + a3 * 30;

    if(total >= n) {
        cout << "0" << endl; // 付款足夠，找零為 0
    } else {
        refund = n - total; // 計算找零金額

        // 計算所需的鈔票張數
        c3 = refund / 50; // 50元的張數
        refund %= 50;
        c2 = refund / 5;  // 5元的張數
        refund %= 5;
        c1 = refund / 1;  // 1元的張數

        cout << c1 << "," << c2 << "," << c3 << endl;
    }
    return 0;
}
