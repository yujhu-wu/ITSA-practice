# 題目20. 大整數加法

> ITSA基礎題練習 · 第0000輪 · [回到本輪目錄](../README.md)

**程式碼檔案**：[solution.cpp](solution.cpp)

---

問題描述：  
有時候我們有些很大的值，大到即使大型的計算機也無法幫我們作一些很基本的運算。請你寫一個程式來解決兩個大整數的加法問題。  
輸入說明：  
第一行有一個正整數N，表示共有N筆測試資料。接下來有N行，每行為一筆測試資料，內含兩個整數，其值不超過30位數，兩個整數間有一個空格。  
輸出說明：  
每筆測試資料輸出兩個整數的和於一行。  
範例  

| Sample Input | Sample Output |
|---|---|
| 2<br>123456789012345678901234567890 98765432109876543210<br>13579024681234567890012453 24681357909876543210567891 | 123456789111111111011111111100<br>38260382591111111100580344 |

```cpp
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--) {
        string num1, num2;
        cin >> num1 >> num2;

        string result;
        int carry = 0;

        int len1 = num1.length();
        int len2 = num2.length();

        int maxLength = max(len1, len2);

        for (int i = 0; i < maxLength; ++i) {
            int digit1 = (i < len1) ? (num1[len1 - 1 - i] - '0') : 0;
            int digit2 = (i < len2) ? (num2[len2 - 1 - i] - '0') : 0;

            int sum = digit1 + digit2 + carry;

            carry = sum / 10;
            sum %= 10;

            result.push_back('0' + sum);
        }

        if (carry > 0) {
            result.push_back('0' + carry);
        }

        reverse(result.begin(), result.end());

        cout << result << endl;
    }

    return 0;
}
```cpp
