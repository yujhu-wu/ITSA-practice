# 題目 15. 文字及字母出現次數

> ITSA 基礎題練習 · 第 0312 輪 · [回到本輪目錄](../README.md)

**程式碼檔案：** [solution.cpp](solution.cpp)

---

問題描述 ：  
在電腦科學上 ，計算一串文字上各個字母出現的頻率是常被用到的技術，這對壓縮來講是很重要的資訊，而計算字數也可以幫助人們作校正的工具。一行文字被空白、逗點或是句點所分隔而形成很多字，例如 ”I have a pencil.” 這行字就有 I ， have ， a ， pencil 這四個字，即此行字數為 4 。所以現在要請你幫忙設計一個程式來計算一行文字的字 數及各個字母出現的次數。  
輸入說明 ：  
輸入一行正常的英文文字，也就是不要有開頭是空白或是有連續兩個 空白的情形發生，並且內容只能包含英文字母、空白、逗點、句點。 注意 : 輸入的字串長度最多是 100 。  
輸出說明 ：  
第一行輸出一個正整數 n ，表示此行文字的字數。 第二行開始依序輸出在此行文字中有出現的字母及出現的次數。 注意 : 大小寫不分，輸出小寫字母。  
範例 ：  

| Sample Input: | Sample Output: |
|---|---|
| I had a dog | 4<br>a : 2<br>d : 2<br>g : 1<br>h : 1<br>i : 1<br>o : 1 |

> 💡 **筆記**  
>
> #include <cctype>  
> #include <string>  
> getline(cin, a); 讀取整行字串（可包含空格）  
> char c = a[i];  
> c = tolower(c); //轉成小寫  

```cpp
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string a;
    char letter[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int counter[26] = {0}; //26個字母
    int number = 1;

    while(getline(cin, a))
    {
        for(int i = 0; i < a.length(); i++)
        {
            char c = a[i];
            c = tolower(c); //轉成小寫
            if(a[i] == ' ') //檢查a[i]是否是空格' '
            {
                number++; //如果是空格，代表「出現新單字」，則 number++
            }
            for(int j = 0; j < 26; j++) //遍歷 letter[26] 陣列，檢查 c 是否是 a-z 的某個字母
            {
                if(c == letter[j])
                {
                    counter[j] ++; //累計該字母出現的次數
                }
            }
        }
        cout << number << endl;
        for(int j = 0; j < 26; j++)
        {
            if(counter[j] != 0)
            {
                cout << letter[j] << " : " << counter[j] << endl;
            }
        }
    }
    return 0;
}
```cpp
