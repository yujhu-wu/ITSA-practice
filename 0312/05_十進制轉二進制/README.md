# 題目5. 十進制轉二進制

> ITSA基礎題練習 · 第0312輪 · [回到本輪目錄](../README.md)

**程式碼檔案**：[solution_1.cpp](solution_1.cpp)、[solution_2.cpp](solution_2.cpp)、[solution_3.cpp](solution_3.cpp)、[solution_4.cpp](solution_4.cpp)

---

問題描述：  
撰寫一個程式，使用者輸入一個整數，印出8位元的二進制表示。  
輸入說明：  
輸入一個整數，介於-128～127之間。  
輸出說明：以8位元的二進制顯示。  
範例：  

| 輸入範例: | 輸出範例: |
|---|---|
| 15<br>-2 | 00001111<br>11111110 |

> 💡 **筆記**  
>
> #include <bitset>   ⇒   bitset<8>(n)  
>  if (n < 0) n += 256; // 處理負數+=256  

```cpp
#include <iostream>

using namespace std;

int main()
{
    int n, bin[8];
    while(cin >> n)
    {
        if(n < 0) n += 256;
        for(int i = 7; i >= 0; i--)
        {
            bin[i] = n % 2;
            n /= 2;
        }
        for(int i = 0; i < 8; i++)
        {
            if(i == 7) cout << bin[i] << endl;
            else cout << bin[i];
        }
    }
    return 0;
}
```cpp

```cpp
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num;
    cin >> num;
    
    cout << bitset<8>(static_cast<unsigned char>(num)) << endl;
    
    return 0;
}

---
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n < 0) n += 256; // 處理負數+=256
        cout << bitset<8>(n) << endl; // 直接轉成8位二進位輸出
    }
    return 0;
}

---
#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n < 0) n += 256;
        for (int i = 7; i >= 0; i--)
            cout << ((n >> i) & 1);// 使用 >>（位元右移）來依次取出 n 的每一個 bit，使用 & 1 來篩選 n 的第 i 位（0 或 1）
        cout << endl;
    }
    return 0;
}
```cpp
