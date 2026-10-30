# 題目14. 判斷是否為迴文

> ITSA基礎題練習 · 第0312輪 · [回到本輪目錄](../README.md)

**程式碼檔案**：[solution.cpp](solution.cpp)

---

問題描述：迴文是指從前面讀和從後面讀都相同的一個數字或一段文字。例如下列每一五位數的整數都是迴文：123321，55555，45554，11611。請撰寫一個程式，判斷它是否迴文。  
輸入說明：輸入一個正整數。  
輸出說明：  
迴文印出 ” 是 ” ；非回文印出 ” 否 ” 。  
範例：  

| Sample Input: | Sample Output: |
|---|---|
| 123321<br>1556551<br>1244221 | YES<br>YES<br>NO |

> 💡 **筆記**  
>
> bool a = 1; //布林變數，用來記錄是否為回文  
> //將input反轉並存入output  
> for(int i = input.length() - 1; i >= 0; i--)  
> input.length() - 1代表最後一個字元的索引  
> input.length() - 1 - i是什麼？  
> 這是 反轉字串的關鍵公式，它的作用是 讓i從最後一個字元開始存入output的正確位置。  

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input, output;
    bool a = 1; //布林變數，用來記錄是否為回文

    while(cin >> input)
    {
		    //將 input 反轉並存入 output
        for(int i = input.length() - 1; i >= 0; i--)
        {
            output[input.length() - 1 - i] = input[i];
        } 
        //檢查是否為回文
        for(int j = 0; j< input.length(); j++)
        {
            if(input[j] != output[j])
            {
                a = 0;
                break;
            }
            else
            {
                a = 1;
            }
        }
        //如果 a == 1（回文），輸出 "YES" //如果 a == 0（非回文），輸出 "NO"
        a ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}
```cpp
