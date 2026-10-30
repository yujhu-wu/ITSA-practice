# 題目38. 計算電費

> ITSA基礎題練習 · 第0312輪 · [回到本輪目錄](../README.md)

**程式碼檔案**：[solution.cpp](solution.cpp)

---

問題描述 ：  
輸入所使用的度數，換算夏月及非夏月之電費金額  

| 每度(元) | 夏月 | 非夏月 |
|---|---|---|
| 120度以下部分 | 2.10 | 2.10 |
| 121-330度部分 | 3.02 | 2.68 |
| 331-500度部分 | 4.39 | 3.61 |
| 501-700度部分 | 4.97 | 4.01 |
| 701度以上部分 | 5.63 | 4.50 |

輸入說明 ：  
一個度數( 正整數 )  
輸出說明 ：  
夏月與非夏月的金額，請輸出至小數點後兩位  
範例 ：  

| 輸入範例 | 輸出範例 |
|---|---|
| 525 | Summer months:1756.75<br>Non-Summer months:1528.75 |

```cpp
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double sum = 0;
    double non = 0;
    cin >> n;
    if(n <= 120)
    {
        sum = n * 2.10;
        non = n * 2.10;
    }
    else if(n <= 330)
    {
        sum = 120 * 2.10 + (n - 120) * 3.02;
        non = 120 * 2.10 + (n - 120) * 2.68;
    }
    else if(n <= 500)
    {
        sum = 120 * 2.10 + 210 * 3.02 + (n - 330) * 4.39;
        non = 120 * 2.10 + 210 * 2.68 + (n - 330) * 3.61;
    }
    else if(n <= 700)
    {
        sum = 120 * 2.10 + 210 * 3.02 + 170 * 4.39 + (n - 500) * 4.97;
        non = 120 * 2.10 + 210 * 2.68 + 170 * 3.61 + (n - 500) * 4.01;
    }
    else
    {
        sum = 120 * 2.10 + 210 * 3.02 + 170 * 4.39 + 200 * 4.97 + (n - 700) * 5.63;
        non = 120 * 2.10 + 210 * 2.68 + 170 * 3.61 + 200 * 4.01 + (n - 700) * 4.50;
    }
    cout << "Summer months:" << fixed << setprecision(2) << sum << endl;
    cout << "Non-Summer months:" << fixed << setprecision(2) << non << endl;
    return 0;
}
```cpp
