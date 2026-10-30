# 題目36. 平、閏年判定

> ITSA基礎題練習 · 第0312輪 · [回到本輪目錄](../README.md)

**程式碼檔案**：[solution.cpp](solution.cpp)

---

問題描述：試撰寫一個程式，可由鍵盤讀入一個4位數的整數，代表西洋的年份，然後判別這個年份是否為閏年(每四年一閏，每百年不閏，每四百年一閏，例如西元1900雖為4的倍數，但可被100整除，所以不是閏年，同理，2000年是閏年，因可被400整數，而2004當然也是閏年，因可以被4整除)。  
輸入說明：輸入西元年份。  
輸出說明：  
輸出閏年(Bissextile Year)或平年(Common YearCommon Year)。  
範例：  

| Sample Input: | Sample Output: |
|---|---|
| 2000<br>2003 | Bissextile Year<br>Common Year |

```cpp
#include <iostream>

using namespace std;

int main()
{
    int year;
    while(cin >> year)
    {
        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            cout << "Bissextile Year" << endl;
        }
        else
        {
            cout << "Common Year" << endl;
        }
    }
    return 0;
}
```cpp
