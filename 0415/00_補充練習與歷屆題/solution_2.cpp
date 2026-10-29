#include <iostream>
using namespace std;

int main() {
    int cols, rows;
    // 輸入第一個數字為欄數 (N)，第二個數字為列數 (M)
    cin >> cols >> rows;

    // 第一個矩陣 mask 儲存 0 和 1
    int mask[rows][cols];
    // 第二個矩陣 data 儲存要加總的數值
    int data[rows][cols];

    // 讀取第一個矩陣 (mask)
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mask[i][j];
        }
    }

    // 讀取第二個矩陣 (data)
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> data[i][j];
        }
    }

    int sum = 0;
    // 遍歷所有位置，若 mask 的值為 1，就將 data 中對應的數字加進 sum 中
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mask[i][j] == 1) {
                sum += data[i][j];
            }
        }
    }

    cout << "總和為: " << sum << endl;
    return 0;
}
