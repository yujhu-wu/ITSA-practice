# 題目33. 一整數序列所含之整數個數及平均值

> ITSA基礎題練習 · 第0514輪 · [回到本輪目錄](../README.md)

**解題關鍵**：`string number;getline istringstream iss(number);`

**程式碼檔案**：[solution.cpp](solution.cpp)

---

問題描述 ：  
寫一個程式求一整數序列所含之整數個數及平均值。  
輸入說明 ：  
一整數序列以空白鍵隔開數字。  
輸出說明：  
序列所含之整數個數及平均值。精確至小數點第3位(由小數點第4位四捨五入)  
範例 ：  

| 輸入範例 | 輸出範例 |
|---|---|
| 23 34 34 56 56<br>100 100 -100 100 100 90<br>1 2 3 4 5 6 7 8 9 10<br>5 5 5 5 5 5 5 5 5 5 5 5<br>543 78243 -901 2785 | Size: 5<br>Average: 40.600<br>Size: 6<br>Average: 65.000<br>Size: 10<br>Average: 5.500<br>Size: 12<br>Average: 5.000<br>Size: 4<br>Average: 20167.500 |

> 💡 **筆記**  
>
> #include <sstream>  
> string number;     // 存放整行輸入  
> istringstream iss(number); //建立字串流，用來解析number裡的數字  
> while(iss >> num) //從iss讀取數字，一次讀取一個  
> {  
> counter++;  
> total += num;  
> }  

```cpp
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int main()
{
    string number;
    while(getline(cin, number))
    {
        int counter = 0;
        double average = 0;
        double total = 0;
        int num; // 用來存取讀取的數字
        istringstream iss(number); //建立字串流，用來解析 number 裡的數字
        while(iss >> num) //從iss讀取數字，一次讀取一個
        {
            counter++;
            total += num;
        }
        average = total / counter;
        cout << "Size: " << counter << endl;
        cout << "Average: " << fixed << setprecision(3) << average << endl;

    }
    return 0;
}
```cpp
