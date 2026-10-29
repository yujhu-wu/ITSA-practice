# 題目 21. 最大值與最小值

> ITSA 基礎題練習 · 第 0415 輪 · [回到本輪目錄](../README.md)

**程式碼檔案：** [solution.cpp](solution.cpp)

---

問題描述 ：  
寫一個程式來找出輸入的十個數字的最大值和最小值，數值不限定為整數，且值可存放於 float 型態數值內。  
輸入說明 ：  
輸入十個數字，以空白間隔。  
輸出說明 ：  
輸出數列中的最大值與最小值，輸出時需附上小數點後兩位數字。  
範例 ：  

| 輸入範例 | 輸出範例 |
|---|---|
| -2 -15.2 0 89.5 100 25.3 7 30 76 4 | maximum:100.00<br>minimum:-15.20 |
| 0 3 52.7 998 135 -256 79 95 10 16 | maximum:998.00<br>minimum:-256.00 |

```cpp
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    float a[10]; //double也可以

    for(int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 10); //sort(起始位置, 結束位置);
    cout << "maximum:" << fixed << setprecision(2) << a[9] << endl;
    cout << "minimum:" << fixed << setprecision(2) << a[0] << endl;

    return 0;
}
```cpp
