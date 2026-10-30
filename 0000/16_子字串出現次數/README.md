# 題目16. 子字串出現次數

> ITSA基礎題練習 · 第0000輪 · [回到本輪目錄](../README.md)

**程式碼檔案**：[solution_1.cpp](solution_1.cpp)、[solution_2.cpp](solution_2.cpp)

---

問題描述：  
給予兩個英文字串，請計算出第一個字串出現在第二個字串中的次數。  
輸入說明：  
輸入分為兩行，第一行是由英文大小寫字母與數字所組成的字串，長度不超過128個字母。  
第二行也是由英文大小寫字母與數字所組成的字串，長度不超過512個字母。  
輸出說明：  
第一個字串出現在第二個字串中的次數。  
範例：  

| Sample Input | Sample Output |
|---|---|
| aa<br>aaa123bbab | 2 |
| baba<br>12b3bbababa12 | 2 |
| baa<br>ababaabbbb | 1 |

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;
    while (cin >> a >> b) // 從標準輸入讀取兩個字串
    {
        int counter = 0; // 計數器，用於計算字串出現的次數
        size_t pos = 0; // 搜尋起始位置
        while ((pos = b.find(a, pos)) != string::npos) // 在字串 b 中尋找字串 a 的位置，當找不到時停止
        {
            counter++; // 找到一個匹配，計數器加一
            pos += 1; // 將搜尋位置向右移動一位，以處理重疊匹配
        }
        cout << counter << endl; // 輸出字串 a 在字串 b 中出現的次數
    }
    return 0;
}
```cpp

1. size_t pos = 0;：這裡宣告了一個size_t型別的變數pos，用於記錄目前搜索的位置，並初始化為0。  
1. while ((pos = b.find(a, pos)) != string::npos)：這是一個while迴圈，它使用find函數在字串b中尋找字串a的位置，從pos開始搜索，直到找不到匹配為止。find函數會返回找到的匹配位置的索引，如果找不到匹配，則返回string::npos。當找到匹配時，迴圈將繼續執行。  
1. pos += 1;：將搜索位置pos向右移動一位，以處理重疊匹配，然後繼續尋找下一個匹配位置。  
1. size_t是一种数据类型，通常用于表示对象的大小或索引，它是无符号整数类型。在C++中，size_t通常被用来表示数组的大小、字符串的长度以及容器中元素的个数等。  
1. string::npos是std::string类的静态成员常量，表示一个无效的位置或未找到的情况。通常在字符串搜索函数中，如果搜索失败，则返回npos。  
1. 在b.find(a, pos)中，find()是string类的成员函数，用于在字符串b中查找子字符串a的第一次出现的位置。它的调用方式是b.find(a, pos)，其中pos是开始搜索的位置。如果找到了子字符串a，则返回其在字符串b中的位置；如果找不到，则返回string::npos。  

```cpp
/*這也可以 */
#include<iostream>
#include<string>
using namespace std;
int appearNum(string& s, int p, string& l);
int main()
{
	string inputS, inputL, save;
	
	cin >> inputS >> inputL;
	cout << appearNum(inputS, 0, inputL) << endl;
	return 0;
}
int appearNum(string& s, int p, string& l)//字串遞迴(檢索字串，起始位置，被檢索字串) 
{
	int a = 0;
	if(p > l.length())return a=0;//若偏移長度大於被檢索字串長度則回傳0 
	for(int i = 0; i < s.length(); i++)//依檢索字串長度進行迴圈 
	{
		if(l[i+p] == s[i])continue;//若比對符合，則持續比對至完全符合 
		else return a += appearNum(s, p + 1, l);//比對不符回傳當前符合次數 
	}
	a++; return a += appearNum(s, p + 1, l);//迴圈完畢表示比對完全符合，計次後往右偏移再測試 
}
```cpp
