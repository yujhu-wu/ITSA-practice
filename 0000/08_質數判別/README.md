# 題目8. 質數判別

> ITSA基礎題練習 · 第0000輪 · [回到本輪目錄](../README.md)

**程式碼檔案**：[solution.cpp](solution.cpp)

---

問題描述：試撰寫一個程式，由輸入一個整數，然後判別此數是否為質數。質數是指除了1和它本身之外，沒有其它的數可以整除它的數，例如，2, 3, 5, 7與11等皆為質數。  
輸入說明：輸入一個正整數。  
輸出說明：  
質數顯示YES；非質數顯示NO。  
範例：  

| Sample Input: | Sample Output: |
|---|---|
| 23<br>37<br>39 | YES<br>YES<br>NO |

```cpp
#include <iostream>

using namespace std;

int main()
{
    int n, i;
    while(cin >> n)
    {
        for(i = 2; i < n; i++)
        {
            if(n % i == 0) break;
        }
        if(i == n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
```cpp
