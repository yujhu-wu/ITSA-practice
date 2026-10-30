# 題目27. 猜數字

> ITSA基礎題練習 · 第0312輪 · [回到本輪目錄](../README.md)

**程式碼檔案**：[solution.cpp](solution.cpp)

---

問題描述 ：  
製作出一個4位數的猜數字系統，若此數的數值和位置跟答案完全相同則出現A，若此數的數值跟答案相同但位置不一樣則出現B，4A時代表猜中此數字。( 注意 : 此猜數字的字數不能重複 )  
假設答案為 :1234  
若輸入 :  
5621  
4321  
1324  
1234  
0000  
則會輸出 :  
0A2B  
0A4B  
2A2B  
4A0B  
輸入說明 ：  
讀入一連串的4位數字，最前面那個為此提猜數字的答案，接著為猜此數字的答案，輸入0為結束。  
輸出說明 ：  
將幾A幾B輸出  
範例 ：  

| 輸入範例 | 輸出範例 |
|---|---|
| 1234                                                                    5621                                                     4321                                                                     1324                                                                     1234                                                     0000 | 0A2B                                                     0A4B                                                                              2A2B                                                             4A0B |

```cpp
#include <iostream>

using namespace std;

int main()
{
    int m;
    cin >> m;
    int que[4] = {0};
    for(int i = 0; i < 4; i++)
    {
        que[i] = m % 10;
        m /= 10;
    }
    int n;
    while(cin >> n)
    {
        if(n == 0)
        {
            break;
        }
        int ans[4] = {0};
        for(int j = 0; j < 4; j++)
        {
            ans[j] = n % 10;
            n /= 10;
        }
        int a = 0, b = 0;
        for(int i = 0; i < 4; i++)
        {
            if(que[i] == ans[i])
            {
                a++;
            }
            else if(que[i] == ans[i - 1] || que[i] == ans[i - 2] || que[i] == ans[i - 3] || que[i] == ans[i + 1] || que[i] == ans[i + 2] || que[i] == ans[i + 3])
            {
                b++;
            }
        }
        cout << a << "A" << b << "B" << endl;
    }
    return 0;
}
```cpp
