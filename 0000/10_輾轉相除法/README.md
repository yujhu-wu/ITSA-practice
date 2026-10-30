# 題目10. 輾轉相除法

> ITSA基礎題練習 · 第0000輪 · [回到本輪目錄](../README.md)

**程式碼檔案**：[solution.cpp](solution.cpp)

---

問題描述：  
給定二個正整數，利用輾轉相除法求其最大公因數。  
輸入說明：  
給定二個正整數  
輸出說明：  
輸出最大公因數  
範例：  
假設輸入為300與250, 則輸出為50  

```cpp
#include <iostream>

using namespace std;

int gcd(int a, int b);
int main()
{
    int m, n, c = 0;
    while(cin >> m >> n)
    {
        if(m > n)
        {
            c = m;
            m = n;
            n = c;
        }
        cout << gcd(m, n) << endl;
    }

    return 0;
}
int gcd(int a, int b)
{
    int f = a % b;
    if(f == 0) return b;
    else return gcd(b, f);
}
```cpp
