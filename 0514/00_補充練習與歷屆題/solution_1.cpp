#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        int D, S;
        cin >> D >> S;

        char map[9][9]; // 3 <= D <= 9 題目保證

        // 初始化整張地圖為 'x'
        for (int i = 0; i < D; i++) {
            for (int j = 0; j < D; j++) {
                map[i][j] = 'x';
            }
        }

        // 根據 S 決定擺放 *
        if (S == 1) { // 右上到左下（反斜線方向）
            for (int i = 0; i < D; i++) {
                map[i][D - 1 - i] = '*';
            }
        }
        else if (S == 2) { // 左上到右下（正斜線方向）
            for (int i = 0; i < D; i++) {
                map[i][i] = '*';
            }
        }
        else if (S == 3) { // 最右邊一整列
            for (int i = 0; i < D; i++) {
                map[i][D - 1] = '*';
            }
        }
        else if (S == 4) { // 最左邊一整列
            for (int i = 0; i < D; i++) {
                map[i][0] = '*';
            }
        }

        // 輸出地圖
        for (int i = 0; i < D; i++) {
            for (int j = 0; j < D; j++) {
                cout << map[i][j];
                if (j < D - 1) cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
