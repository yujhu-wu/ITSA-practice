# 題目 35. 買獎品

> ITSA 基礎題練習 · 第 0312 輪 · [回到本輪目錄](../README.md)

**程式碼檔案：** [solution.cpp](solution.cpp)

---

問題描述 ：  
公司尾牙預定購買一批獎品給員工抽獎，而且人人有獎。在有限的經費、固定員工數、每份獎品均不相同的限制下，該如何選購獎品，使得總花費最少且不超過預算？  
輸入說明 ：  
程式輸入的第一行包含一個正整數 n ， 1 ≤ n ≤ 10 ，代表接下來有 n 筆測試資料。每筆測試資料包含兩行數據，第一行包含三個正整數 T, m 和 k ， m ≤ k ≤ 100 ； T 代表總預算， m 代表員工數（禮物數量）， k 代表有 k 件物品可供選購。第二行包含 k 個正整數，分別代表 k 種物品的售價，正整數間以空白隔開。  
輸出說明 ：  
對於每一筆測試資料，輸出一行結果，該行結果列印禮品總花費。倘若預算內無法購買足夠量的禮物，則列印 “Impossible” 。  
範例 ：  

| 輸入範例 | 輸出範例 |
|---|---|
| 2<br>100 3 5<br>5 25 45 70 85<br>200 4 6<br>55 75 90 100 150 160 | 75<br>Impossible |

> 💡 **筆記**  
>
> #include <algorithm>  
>  sort(price, price + i);//讓價格由小到大排列，這樣最便宜的m個物品就會在 price[0] ~ price[m-1]。  

```cpp
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, T, m, k;
    int price[100];
    cin >> n;
    while(n--)
    {
        int total = 0;
        cin >> T >> m >> k;
        int i;
        for(i = 0; i < k; i++)
        {
            cin >> price[i];
        }
        sort(price, price + i);//讓價格由小到大排列，這樣最便宜的m個物品就會在 price[0] ~ price[m-1]。
        for(int j = 0; j < m; j++)
        {
            total += price[j];
        }
        if(total <= T)
        {
            cout << total << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}
```cpp
