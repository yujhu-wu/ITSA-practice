# 題目20. 大整數加法

> ITSA基礎題練習 · 第0514輪 · [回到本輪目錄](../README.md)

**解題關鍵**：`string bigadd();res`

**程式碼檔案**：[solution_1.cpp](solution_1.cpp)、[solution_2.cpp](solution_2.cpp)

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
using namespace std;

// 大數相加函式
string bigAdd(string a, string b) {
    string res = "";  //res 是用來存放「加法結果」的大數字，一開始把它設成空的，""之間不空格
    int sum, carry = 0; // carry 是進位用的變數
    
    //i 是字串 a 最後一位的索引（個位數），j 是字串 b 最後一位的索引
    int i = a.size() - 1, j = b.size() - 1;
    
    while (i >= 0 || j >= 0 || carry) { //carry != 0，只要 a 或 b 還有沒加完的位數，或者還有進位沒處理，就繼續加
        sum = carry;
        if (i >= 0) sum += a[i--] - '0'; // 轉換成數字加總
        if (j >= 0) sum += b[j--] - '0';
        
        carry = sum / 10; // 進位
        res = char(sum % 10 + '0') + res; // 把個位數(變回字串)再加進結果(字串)前面
    }
    return res;
}

int main() {
    int N;
    cin >> N;
    while (N--) {
        string a, b;
        cin >> a >> b;
        cout << bigAdd(a, b) << endl;
    }
    return 0;
}
```cpp

```cpp
#include <bits/stdc++.h>
using namespace std;

string bigadd(string a,string b);
int main()
{
    int n;
    cin>>n;
    while(n--){
        string a, b;
        cin>>a>>b;
        cout<<bigadd(a,b)<<endl;
    }
    return 0;
}

string bigadd(string a,string b)
{
    string res =""; //""之間不空格
    int sum, carry=0;
    int i = a.length()-1;
    int j = b.length()-1;

    while(i>=0 || j>=0 || carry){
        sum=carry;
        if(i>=0) sum += a[i--]-'0';
        if(j>=0) sum += b[j--]-'0';
        carry = sum/10;
        res = char(sum%10 +'0') + res;
    }
    return res;
}
```cpp
