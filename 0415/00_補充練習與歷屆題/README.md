# 補充練習與歷屆題(第0415輪)

> [回到本輪目錄](../README.md)

**程式碼檔案**：[solution_1.cpp](solution_1.cpp)、[solution_2.cpp](solution_2.cpp)、[solution_3.cpp](solution_3.cpp)、[solution_4.cpp](solution_4.cpp)

---

## 陣列練習

3 3  
2 6  
1 2 3  
4 5 6  
7 8 9  
[output]總和為: 20  
輸入一個值N和M，代表他是N*M陣列  
在輸入X和Y值，代表要把陣列中的第X到Y個位置的值加起來  
要用C++最簡單易懂的方式寫，你只是一個正在學陣列的大學生  

```cpp
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
```cpp

4 3  
0 1 1 1  
1 1 0 0  
0 0 0 0  
1 2 3 4  
5 6 7 8  
1 2 3 4  
[output]總和為: 20  
如果是輸入N和M  
代表有N*M兩個陣列  
N的陣列裡為1的值其位置對應在M陣列裡，並將M陣列的值加總為輸出  

```cpp
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

```cpp

## 2024/04 - Problem 4. 防禦系統敵人來襲

S=1，飛彈從左前方來，*要從右上到左下  
S=2，飛彈從右前方來，*要從左上到右下  
S=3，飛彈從右方來，*要聚集在最右邊  
S=4，飛彈從左方來，*要聚集在最左邊  
![題目圖片1](images/img1.png)  
![題目圖片2](images/img2.png)  

```cpp
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
```cpp

```cpp
//妍：S=1或2時，可用 i + j = D - 1 ;的條件來判斷要不要輸出j為*。
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        int D, S;
        cin >> D >> S;

        for (int i = 0; i < D; i++) {
            for (int j = 0; j < D; j++) {
                if ((S == 1 && i + j == D - 1) ||     // 右上到左下
                    (S == 2 && i == j) ||             // 左上到右下
                    (S == 3 && j == D - 1) ||         // 最右邊
                    (S == 4 && j == 0))               // 最左邊
                    cout << '*';
                else
                    cout << 'x';

                if (j < D - 1) cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

```
