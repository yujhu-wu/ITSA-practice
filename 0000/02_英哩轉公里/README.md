# 題目 2. 英哩轉公里

> ITSA 基礎題練習 · 第 0000 輪 · [回到本輪目錄](../README.md)

**程式碼檔案：** [solution.cpp](solution.cpp)

---

問題描述：  
試撰寫一程式，可由鍵盤輸入英哩，程式的輸出為公里，其轉換公式如下：  
1 英哩= 1.6 公里  
輸入說明：  
輸入欲轉換之英哩數(int)。  
輸出說明：  
輸出公里(double)，取到小數點以下第一位。  
範例：  

| 輸入範例: | 輸出範例: |
|---|---|
| 90<br>95 | 144.0<br>152.0 |

```cpp
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double m;
    while(cin >> n)
    {
        m = n * 1.6;
        cout << fixed << setprecision(1) << m << endl;
    }
    return 0;
}

```cpp
