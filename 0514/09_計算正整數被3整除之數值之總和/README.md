# 題目 9. 計算正整數被3整除之數值之總和

> ITSA 基礎題練習 · 第 0514 輪 · [回到本輪目錄](../README.md)

**程式碼檔案：** [solution.cpp](solution.cpp)

---

問題描述：  
試寫一個程式，輸入一正整數N，可計算出1到N之間可被3整除的數值之總和。  
輸入說明：  
輸入一正整數。  
輸出說明：  
輸出總和。  
範例：  

| 輸入範例: | 輸出範例: |
|---|---|
| 100<br>150 | 1683<br>3825 |

```cpp
#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int counter = 0;
        for(int i = 1; i <= n; i++)
        {
            if(i % 3 == 0)
            {
                counter += i;
            }
        }
        cout << counter << endl;
    }
    return 0;
}

```cpp
