# 題目 19. 最少派車數

> ITSA 基礎題練習 · 第 0415 輪 · [回到本輪目錄](../README.md)

**程式碼檔案：** [solution.cpp](solution.cpp)

---

問題描述 ：  
某遊覽車派遣公司共收到n筆任務訂單，訂單中詳細記載發車時間s和返回時間d。每一輛遊覽車只要任務時間不衝突，可立即更換司機繼續上路執行任務。請問該公司至少需要調遣多少車輛才足以應付需求？  
輸入說明 ：  
程式的輸入包含兩行數字，第一行包含一個正整數n，1 ≤ n ≤ 30，代表第二行有n筆訂單的出發時間和返回時間s1, d1, s2, d2, ..., sn, dn，0 < si < di ≤ 24，而此2n個正整數間以空格隔開。  
輸出說明 ：  
輸出最少車輛需求數。  
範例 ：  

| Sample Input: | Sample Output: |
|---|---|
| 3<br>1 6 3 12 6 18 | 2 |

```cpp
#include <iostream>

using namespace std;

int main()
{
    int n;
    int s, d, max = 0; //max要初始化
    int t[25] = {0}; //t[0]~t[24]代表一天的 24 小時，要初始化
    cin >> n;

    for(int j = 0; j < n; j++) //while(n--)也可以
    {
        cin >> s >> d;
        for(int i = s; i < d; i++) //當 s ≤ i < d 時，t[i]++ 表示這個時間點 i 內有活動。
        {
            t[i]++;//表示時間i內有多少個活動同時進行
        }
    }
    for(int k = 0; k < 25; k++)
    {
        if(t[k] > max) //如果t[k]的活動數比 max 大
        {
            max = t[k]; //更新max，記錄最大活動重疊數
        }
    }
    cout << max << endl;
    return 0;
}
```cpp
