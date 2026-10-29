# 題目 25. 字串之編碼數值總和

> ITSA 基礎題練習 · 第 0312 輪 · [回到本輪目錄](../README.md)

**程式碼檔案：** [solution.cpp](solution.cpp)

---

問題描述 ：  
給定一字串，請將此字串中，每個字元的 ASCII 編碼數值進行加總，輸出其編碼數值總和。  
舉例來說，若輸入之字串為 “abcdefghij” 共 10 個字元，其 ASCII 編碼依序為 “97 98 99 100 101 102 103 104 105 106” ，則編碼總和輸出為 1015 。  
輸入說明 ：  
第一行的整數，代表共有幾筆測試字串。之後每一行表示一筆測試字串（ ≤ 32 字元），每筆測試字串以換行作結束，字串中可包含除換行以外之各種可顯示的字元符號。  
輸出說明 ：  
輸出每一筆測試字串之 ASCII 編碼總和，並以換行作結束。  
範例 ：  

| 輸入範例 | 輸出範例 |
|---|---|
| 2<br>I am a student.<br>abcdefghij | 1293<br>1015 |

```java
import java.util.*;  
  
public class Main {  
  
    public static void main(String[] args) {  
        Scanner scn = new Scanner(System.in);  
        int n=Integer.parseInt(scn.nextLine());
        while(n--!=0){
        	char arr[]=scn.nextLine().toCharArray();
        	int tot=0;
        	for(int i=0;i<arr.length;i++){
        		tot+=arr[i];
        	}
        	System.out.println(tot);
        }
    }
}
```cpp

```cpp
#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        int sum = 0;
        getline(cin, s);
        for(int i = 0; i<s.length(); i++)
        {
            sum += (int)s[i];
        }
        cout << sum << endl;
    }
    return 0;
}
```cpp
