# 題目 8. 質數判別

> ITSA 基礎題練習 · 第 0415 輪 · [回到本輪目錄](../README.md)

**程式碼檔案：** [solution.cpp](solution.cpp)

---

問題描述：試撰寫一個程式，由輸入一個整數，然後判別此數是否為質數。質數是指除了 1 和它本身之外，沒有其它的數可以整除它的數，例如， 2, 3, 5, 7 與 11 等皆為質數。  
輸入說明：輸入一個正整數。  
輸出說明：  
質數顯示 YES ；非質數顯示 NO 。  
範例：  

| Sample Input: | Sample Output: |
|---|---|
| 23<br>37<br>39 | YES<br>YES<br>NO |

> 💡 **筆記**  
>
> 因為是只能被 1 和 自己 整除的數，要除以 2 ~ n-1 的數，所以i從2開始  
> i要宣告在外面，不然條件裡的i讀不到  

```cpp
#include <iostream>

using namespace std;

int main()
{
    int n, i;
    while(cin >> n)
    {
        for(i = 2; i < n; i++)// 從i=2開始，一直測試到n-1
        {
            if(n % i == 0) break;//如果 n%i==0，表示n不是只能被自己整除(除了2)，直接break，跳到輸出NO
        }
        if(i == n) cout << "YES" << endl;//如果前面條件過了(在n-1內無法被取餘0)，n本身又和i數字相等，就是YES
        else cout << "NO" << endl;
    }
    return 0;
}
```cpp
