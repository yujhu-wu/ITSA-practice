# 題目 30. 星座查詢

> ITSA 基礎題練習 · 第 0312 輪 · [回到本輪目錄](../README.md)

**程式碼檔案：** [solution.cpp](solution.cpp)

---

問題描述：  
星座查詢有 " 水瓶 "," 雙魚 "," 牡羊 "," 金牛 " ," 雙子 "," 巨蟹 "," 獅子 "," 處女 " ," 天秤 "," 天蠍 "," 射手 "," 摩羯 "; 請設計程式，根據輸入之月及日期，輸出對應之星座輸出。  
1997 年 1 月 21 日 1997 年 2 月 18 日 水瓶  
1997 年 2 月 19 日 1997 年 3 月 20 日 雙魚  
1997 年 3 月 21 日 1997 年 4 月 20 日 牡羊  
1997 年 4 月 21 日 1997 年 5 月 21 日 金牛  
1997 年 5 月 22 日 1997 年 6 月 21 日 雙子  
1997 年 6 月 22 日 1997 年 7 月 22 日 巨蟹  
1997 年 7 月 23 日 1997 年 8 月 23 日 獅子  
1997 年 8 月 24 日 1997 年 9 月 23 日 處女  
1997 年 9 月 24 日 1997 年 10 月 23 日 天秤  
1997 年 10 月 24 日 1997 年 11 月 22 日 天蠍  
1997 年 11 月 23 日 1997 年 12 月 21 日 射手  
1997 年 12 月 22 日 1998 年 1 月 20 日 摩羯  
Aquarius 水瓶座 Leo 獅子座  
Pisces 雙魚座 Virgo 處女座 Aries 牡羊座 Libra 天秤座 Taurus 金牛座 Scorpio 天蠍座 Gemini 雙子座 Sagittarius 射手座 Cancer 巨蟹座 Capricorn 摩羯座  
輸入說明：  
請輸入月及日期。  
輸出說明：  
依照星座標準，將月及日期轉成星座輸出。  
範例：  

| Sample Input | Sample Output |
|---|---|
| 08 20 | Leo |
| 06 24 | Cancer |
| 03 13 | Pisces |

```cpp
#include <iostream>

using namespace std;

int main()
{
    int month, date;
    while(cin >> month >> date)
    {
        if((month == 1 && date >= 21) || (month == 2 && date <= 18))
        {
            cout << "Aquarius" << endl;
        }
        if((month == 2 && date >= 19) || (month == 3 && date <= 20))
        {
            cout << "Pisces" << endl;
        }
        if((month == 3 && date >= 21) || (month == 4 && date <= 20))
        {
            cout << "Aries" << endl;
        }
        if((month == 4 && date >= 21) || (month == 5 && date <= 21))
        {
            cout << "Taurus" << endl;
        }
        if((month == 5 && date >= 22) || (month == 6 && date <= 21))
        {
            cout << "Gemini" << endl;
        }
        if((month == 6 && date >= 22) || (month == 7 && date <= 22))
        {
            cout << "Cancer" << endl;
        }
        if((month == 7 && date >= 23) || (month == 8 && date <= 23))
        {
            cout << "Leo" << endl;
        }
        if((month == 8 && date >= 24) || (month == 9 && date <= 23))
        {
            cout << "Virgo" << endl;
        }
        if((month == 9 && date >= 24) || (month == 10 && date <= 23))
        {
            cout << "Libra" << endl;
        }
        if((month == 10 && date >= 24) || (month == 11 && date <= 22))
        {
            cout << "Scorpio" << endl;
        }
        if((month == 11 && date >= 23) || (month == 12 && date <= 21))
        {
            cout << "Sagittarius" << endl;
        }
        if((month == 12 && date >= 22) || (month == 1 && date <= 20))
        {
            cout << "Capricorn" << endl;
        }
    }
    return 0;
}
```cpp
