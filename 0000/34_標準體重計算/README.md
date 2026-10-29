# 題目 34. 標準體重計算

> ITSA 基礎題練習 · 第 0000 輪 · [回到本輪目錄](../README.md)

**程式碼檔案：** [solution.cpp](solution.cpp)

---

問題描述：  
已知男生標準體重＝(身高－80 )*0.7；女生標準體重＝(身高－70)*0.6；試寫一個程式可以計算男生女生的標準體重。  
輸入說明：  
每個測資檔案會有多組測資案例。輸入兩個數值，依序代表為身高及性別（1代表男性；2代表女性）。  
輸出說明：  
輸出標準體重，浮點數取至第一位。  
範例：  

| 輸入範例: | 輸出範例: |
|---|---|
| 172 1<br>165 2 | 64.4<br>57.0 |

```cpp
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int height, sex;
    float kilogram;
    while(cin >> height >> sex)
    {
        if(sex == 1)
        {
            kilogram = (height - 80) * 0.7;
        }
        else if(sex == 2)
        {
            kilogram = (height - 70) * 0.6;
        }
        cout << fixed << setprecision(1) << kilogram << endl;
    }
    return 0;
}
```cpp
