# 題目4. 停車費計算

> ITSA基礎題練習 · 第0312輪 · [回到本輪目錄](../README.md)

**程式碼檔案**：[solution.cpp](solution.cpp)

---

問題描述：假設某個停車場的費率是停車2小時以內，每半小時30元，超過2小時，但未滿4小時的部份，每半小時40元，超過4小時以上的部份，每半小時60元，未滿半小時部分不計費。如果您從早上10點23分停到下午3點20分，請撰寫程式計算共需繳交的停車費。  
輸入說明：  
輸入兩組時間，分別為開始與離開時間，24小時制。  
輸出說明：  
輸出停車費。  
範例：  

| 輸入範例: | 輸出範例: |
|---|---|
| 10 23<br>15 20 | 340 |

```cpp
#include <iostream>

using namespace std;

int main()
{
    int hr1, hr2, minute1, minute2;
    int start = 0, endtime = 0;
    int total = 0;
    while(cin >> hr1 >> minute1 >> hr2 >> minute2)
    {
        start = hr1 * 60 + minute1;
        endtime = hr2 * 60 + minute2;
        total = endtime - start;
        if(total <= 120 && total > 0)//大於小於要分兩個條件寫，2小時內=包含兩小時
        {
            cout << total / 30 * 30 << endl;
        }
        else if(total > 120 && total <= 240)//超過2小時，但未滿4小時的部份
        {
            cout << (total - 120) / 30 * 40 + 120 << endl;//兩小時的部分前面已經算過了，時間上要扣掉120分鐘
        }
        else
        {
            cout << (total - 240) / 30 *60 + 280 << endl;
        }
    }
    return 0;
}

```cpp
