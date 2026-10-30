# 題目32. 字母往後移

> ITSA基礎題練習 · 第0312輪 · [回到本輪目錄](../README.md)

**程式碼檔案**：[solution_1.cpp](solution_1.cpp)、[solution_2.cpp](solution_2.cpp)

---

問題描述  
志明跟春嬌是班上的一對情侶，他們有寫交換日記來打發時間的習慣，為了防止他們寫的內容被幫忙傳的同學，或者是不小心被老師沒收，而曝光了裡面寫的東西，他們想到了一個辦法，就是把內容的所有字母都往後數幾次的字母替代，而往後數幾次的數目就寫在內容的下一行。但是，問題來了，春嬌覺得每次寫完都要在數來數去的轉化成”加密”格式，實在是太麻煩了。但又礙於不想被輕易的看到內容，於是她拜託你寫個程式幫忙她可以直接把寫好的內容轉化成”加密”的型態。加密結果不會影響原字母的大小寫，且數字部分亦作相同處理，但不處理符號及特殊字元及中文。  
輸入說明  
第一行為想輸入的內容，不超過100個字  
第二行為打完你想輸入的內容之後，換行輸入你想要往後替代的數目。  
輸出說明  
印出轉換後的句子。  
範例  

| Sample Input | Sample Output |
|---|---|
| How are you? <br>2 | Jqy ctg aqw? |

```cpp
#include<iostream>
#include<string>

using namespace std;
int main()
{
	string in;
	getline(cin,in);
	int p = 0;
	cin >> p;
	for(int i = 0; i < in.length(); i++)
	{
		if((int)in[i] >= 'A' && (int)in[i] <= 'Z')
		{
			in[i] = (char)(((int)(in[i] - 'A') + p) % 26 + 'A');
		}
		if((int)in[i] >= 'a' && (int)in[i] <= 'z')
		{
			in[i] = (char)(((int)(in[i] - 'a') + p) % 26 + 'a');
		}
		if((int)in[i] >= '0' && (int)in[i] <= '9')
		{
			in[i] = (char)(((int)(in[i] - '0') + p) % 10 + '0');
		}
	}
	cout << in << endl;
	in = " "; 
	return 0;
}
```cpp

1. (int)in[i] >= 'A' && (int)in[i] <= 'Z'：此條件檢查in[i]是否為大寫字母。在ASCII編碼中，大寫字母的範圍是從 'A' 到 'Z'。  
1. (int)(in[i] - 'A')：這部分計算了從字母 'A' 開始的偏移量，即將字母 'J' 減去 'A' 後得到的數字。在ASCII編碼中，字母 'A' 的值是65，字母 'J' 的值是74，因此(int)(in[i] - 'A')將返回9。  
1. (int)(in[i] - 'A') + p：這部分將先前計算的偏移量加上讀取的整數p，假設p的值為3，那麼這裡將返回9 + 3 = 12。  
1. (int)(in[i] - 'A') + p) % 26：由於凱撒加密是將字母按照一定的位移進行替換，所以這裡將計算(int)(in[i] - 'A') + p除以26的餘數，以保證新的字母仍然在大寫字母的範圍內。  
1. ((int)(in[i] - 'A') + p) % 26 + 'A'：最後，將餘數加上 'A' 的ASCII值，以將其轉換為相應的大寫字母。假設計算後的餘數為12，那麼加上 'A' 的ASCII值65，最終將返回77，對應的字符是大寫字母 'M'。  

```cpp
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string in;
    getline(cin, in);
    int p = 0;
    cin >> p;
    for (int i = 0; i < in.length(); i++)
    {
        if (isupper(in[i]))
        {
            in[i] = 'A' + (in[i] - 'A' + p) % 26;
        }
        else if (islower(in[i]))
        {
            in[i] = 'a' + (in[i] - 'a' + p) % 26;
        }
        else if (isdigit(in[i]))
        {
            in[i] = '0' + (in[i] - '0' + p) % 10;
        }
    }
    cout << in << endl;
    return 0;
}
```cpp
