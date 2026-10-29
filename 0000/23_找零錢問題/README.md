# 題目 23. 找零錢問題

> ITSA 基礎題練習 · 第 0000 輪 · [回到本輪目錄](../README.md)

**程式碼檔案：** [solution.cpp](solution.cpp)

---

問題描述 ：  
假設銅板有1元、5元、50元共三種，媽媽請小明去菜市場買水果，給了小明N元，且媽媽交待，要老闆找小明的零錢的數目要最少，而小明到了水果攤買了a1顆蘋果，a2顆柳丁，及a3顆桃子，1顆蘋果15元，1顆柳丁20元，1顆桃子30元，請問老問需找多少個1元、5元、50元，其銅板數目最少。  
輸入說明 ：  
先輸入媽媽給小明多少錢，N，接著輸入a1, a2, a3 ， 在此n, a1, a2, a3為整數，且a1*15+ a2*20+ a3*30小於或等於N。  
輸出說明 ：  
列出共找小明多少個1元，5元及50元，若帶的錢不夠買水果，則顯示”0”。  
範例 ：  

| Sample Input: | Sample Output: |
|---|---|
| 500,1,2,3 | 0,1,7 |

```cpp
#include <iostream>

using namespace std;

int main()
{
    int n, a1, a2, a3;
    int c1 = 0, c2 = 0, c3 = 0;
    int total = 0;
    int refund = 0;
    scanf("%d,%d,%d,%d", &n, &a1, &a2, &a3);
    total = a1 *15 + a2 * 20 + a3 * 30;
    if(total >= n)
    {
        cout << "0" << endl;
    }
    else
    {
        refund = n - total;
        c3 = refund / 50;
        refund = refund % 50;
        c2 = refund / 5;
        refund = refund % 5;
        c1 = refund / 1;
        cout << c1 << "," << c2 << "," << c3 << endl;
     }
    return 0;
}
```cpp
