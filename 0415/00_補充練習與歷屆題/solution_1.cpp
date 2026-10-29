#include <iostream>
using namespace std;

int main() {
    int n, m;
    // 讀取矩陣的尺寸 N 與 M
    cin >> n >> m;

    int X, Y;
    // 讀取加總範圍 X 與 Y（假設資料是從 1 開始編號）
    cin >> X >> Y;

    int arr[n * m];  // 直接使用 n*m 作為陣列大小

    // 讀取矩陣內的所有數字 (依照 row-major 輸入順序)
    for (int i = 0; i < n * m; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    // 注意：陣列的索引從 0 開始，所以第 X 個位置對應 arr[X-1]
    for (int i = X - 1; i < Y; i++) {
        sum += arr[i];
    }

    cout << "總和為: " << sum << endl;
    return 0;
}
