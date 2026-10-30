# 題目6. 季節判定

> ITSA基礎題練習 · 第0312輪 · [回到本輪目錄](../README.md)

**程式碼檔案**：[solution_1.cpp](solution_1.cpp)、[solution_2.cpp](solution_2.cpp)

---

問題描述：試撰寫一程式，可輸入月份，然後判斷其所屬的季節( 3~5月為春季，6~8月為夏季，9~11月為秋季，12~2月為冬季)。  
輸入說明：輸入月份。  
輸出說明：輸出該月份的季節，3~5月為春季(Spring)，6~8月為夏季(Summer)，9~11月為秋季(Autumn)，12~2月為冬季(Winter)。  
範例：  

| Sample Input: | Sample Output: |
|---|---|
| 3<br>10 | Spring<br>Autumn |

```cpp
#include <iostream>

using namespace std;

int main()
{
    int season;
    while(cin >> season)
    {
        if(season == 3 || season == 4 || season == 5)
        {
            cout << "Spring" << endl;
        }
        else if(season == 6 || season == 7 || season == 8)
        {
            cout << "Summer" << endl;
        }
        else if(season == 9 || season == 10 || season == 11)
        {
            cout << "Autumn" << endl;
        }
        else
        {
            cout << "Winter" << endl;
        }
    }
    return 0;
}

```cpp

```cpp
#include <iostream>

using namespace std;

int main()
{
    string season[] = {"Winter", "Spring", "Summer", "Autumn"};
    int m;
    while(cin >> m)
    {
        cout << season[(m % 12) / 3] << endl;
    }
    return 0;
}
```cpp
