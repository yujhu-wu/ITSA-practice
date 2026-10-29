# 題目 7. 複數運算

> ITSA 基礎題練習 · 第 0514 輪 · [回到本輪目錄](../README.md)

**解題關鍵：** `char op; //符號`

**程式碼檔案：** [solution.cpp](solution.cpp)

---

問題描述 ：  
在做傅立葉轉換時，常會用到複數，但每次都要分開來計算實部與虛部，非常的麻煩，現在透過operator overloading的方式來簡化程式設計師的負擔。須做加減乘。  
輸入說明 ：  
第一列輸入一個正整數n。其後有n列，每一列代表一個想要做運算的虛數，每一列之資料依序為運算元、虛數1、虛數2。虛數的格式為a b。  
輸出說明 ：  
每一列表一個運算結果。虛數的格式為a b。  
範例 ：  

| Sample Input: | Sample Output: |
|---|---|
| 3<br>- 1 2 2 -3<br>+ 2 1 1 2<br>* 1 1 1 1 | -1 5<br>3 3<br>0 2 |

> 💡 **筆記**  
>
> 輸入一個正整數n。其後有n列⇒ cin>>n;    while(n--)  
> char op//表示符號字元  
> //配對+  
> //配對-  
> //配對乘- 和 交叉乘+  
> //配對乘+ 和 交叉乘-，都除一樣的(b1的平方+b2的平方)  
> *乘法⇒(a1 * b1 - a2 * b2)配對-  和 (a2 * b1 + a1 * b2)交叉+  
> /除法 ⇒(a1 * b1 + a2 * b2)配對+ / (b1 * b1 + b2 * b2) 和 (a2 * b1 - a1 * b2)交叉- / (b1 * b1 + b2 * b2) [a1 b1+a2 b2]和[a2 b1-a1 b2]  

```cpp
#include <iostream> 
 
using namespace std; 
 
int main() 
{ 
    int n; 
    cin >> n; 
    int a1, a2, b1, b2; 
    char op; 
 
    while(n--) 
    { 
        cin >> op >> a1 >> a2 >> b1 >> b2; 
        if(op == '+') 
        { 
            cout << a1 + b1 << " " << a2 + b2 << endl; //配對+
        } 
        else if(op == '-') 
        { 
            cout << a1 - b1 << " " << a2 - b2 << endl; //配對-
        } 
        else if(op == '*') 
        { 
            cout << a1 * b1 - a2 * b2 << " " << a2 * b1 + a1 * b2 << endl; //配對- 和 交叉+
        } 
        else if(op == '/') 
        { 
            cout << (a1 * b1 + a2 * b2) / (b1 * b1 + b2 * b2) << " " << (a2 * b1 - a1 * b2) / (b1 * b1 + b2 * b2) << endl;//配對+ 和 交叉-，除依樣的b12平方+
        } 
    } 
    return 0; 
}  
```cpp
