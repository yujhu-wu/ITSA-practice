# 題目39. 考試測驗

> ITSA基礎題練習 · 第0000輪 · [回到本輪目錄](../README.md)

**程式碼檔案**：[solution.cpp](solution.cpp)

---

問題描述 : 某間學校舉辦英文檢定測驗，若是學生通過該測驗，則能通過畢業門檻。老師準備的英文測驗中分為三個項目當作考試，分別是聽力、閱讀、口說。每一個項目測驗滿分皆為100分，總分為300分。想要通過測驗有兩種方式。方式一：若是三個項目分數皆為60分以上( 包含60分 )即為通過測驗。方式二：若三個項目中有其中一個項目分數未滿60分，但三個項目分數總合超過220分，也可算通過測驗。若三個項目中有其中一個項目分數未滿60分，而三個項目分數總合也沒能超過220分，可獲得補考機會。若是三個項目中有兩個項目不及格，但另一個項目成績高於80分( 包含80分 )，也可獲得補考的機會。其餘皆判定為無法通過測驗。  
輸入說明 ：  
第一行為一個整數N，代表共有N組測試資料。之後有N行，每一行有3個非負整數( 範圍皆為0到100), 分別代表該名學生聽力、閱讀、口說的測驗分數。  
輸出說明 :  
若是通過測驗，則輸出 ”P” 。若是需要補考，則輸出 ”M” 。若是無法通過測驗，則輸出 ”F” 。 每組答案結果輸出於一行。  
Sample Run ：  

| Sample Input | Sample Output |
|---|---|
| 5<br>95 86 100<br>30 60 80<br>80 55 85<br>20 30 60<br>10 80 10 | P<br>M<br>P<br>F<br>M |

```cpp
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int grade[3];
    while(n--)
    {
        int counter = 0;
        int total = 0;
        for(int i = 0; i < 3; i++)
        {
            cin >> grade[i];
            total += grade[i];
            if(grade[i] >= 60)
            {
                counter++;
            }
        }
        if(counter == 3)
        {
            cout << "P" << endl;
        }
        else if(counter == 2)
        {
            if(total >= 220)
            {
                cout << "P" << endl;
            }
            else
            {
                cout << "M" << endl;
            }
        }
        else
        {
            if((grade[0] >= 80 || grade[1] >= 80) || grade[2] >= 80)
            {
                cout << "M" << endl;
            }
            else
            {
                cout << "F" << endl;
            }
        }
    }
    return 0;
}
```cpp
