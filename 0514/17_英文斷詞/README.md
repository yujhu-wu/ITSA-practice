# 題目17. 英文斷詞

> ITSA基礎題練習 · 第0514輪 · [回到本輪目錄](../README.md)

**解題關鍵**：`getline #include <vector> wd.clear();find(wd.begin(),wd.end(),word)==wd.end();words.push_back(word);  for (size_t i = 0; i < wd.size(); ++i)`

**程式碼檔案**：[solution_1.cpp](solution_1.cpp)、[solution_2.cpp](solution_2.cpp)

---

問題描述 ：  
斷詞在自然語言的研究上是個很重要的步驟，主要就是將關鍵字從句子中斷出，英文的斷詞較為簡單，就根據句子中的空格將英文字隔開。  
輸入說明 ：  
輸入一句英文敘述句。 字元數≤1000。  
輸出說明 ：  
將輸入的句子進行斷詞，將斷出的關鍵字依照句子中的出現排序列印出。全部轉成小寫，列印出的關鍵字不得重複，關鍵字間以一個空格隔開，最後一個關鍵字後面進行換行。例如輸入How do you do，則輸出how do you。  
範例 ：  

| 輸入範例 | 輸出範例 |
|---|---|
| How do you do | how do you |

| find(vec.begin(), vec.end(), x) | 檢查向量中有沒有x |
|---|---|
| vector<string> | 儲存處理後的單字清單 |

> find(words.begin(), words.end(), word)  

意思是： 👉 在words這個vector<string>裡面  
👉 從「開始位置」到「結束位置」  
👉 找看看有沒有一個字等於word  

> == words.end()是什麼意思？  

如果find()找不到那個word，它會回傳end()  

```cpp
#include <iostream> 
#include <string> 
#include <sstream> 
#include <vector> 
#include <algorithm> 
 
using namespace std; 
 
int main() 
{ 
    string input, word; 
    vector<string> words; 
    //input：儲存整行輸入，word：暫時存單一個字
    //words：儲存「不重複且轉小寫」的單字列表
 
    while (getline(cin, input)) 
    { 
        words.clear(); 
 
        istringstream iss(input); // 把整行字串丟進字串流
        while (iss >> word) // 每次讀一個 word
        { 
            for (int j = 0; j < word.length(); j++) 
            { 
                word[j] = tolower(word[j]);  
            } 
            if (find(words.begin(), words.end(), word) == words.end()) //檢查 word 是否已經在 words 中
            { 
                words.push_back(word); // 如果沒有重複，就加進去
            } 
        } 
        
			 //「從 i = 0 開始，一個一個走訪 words 裡的每個單字，直到最後一個」。
        for (size_t i = 0; i < words.size(); ++i) 
        { //把 words 中的所有單字印出來，用空格隔開
            cout << words[i]; 
            if (i < words.size() - 1) 
            { 
                cout << " "; 
            } 
        } 
        cout << endl; 
    } 
    return 0; 
} 
```cpp

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input,word;
    vector<string> wd;

    while (getline(cin, input)){
        wd.clear();
        istringstream iss(input);

        while(iss>>word){
            for(int j=0;j<word.length();j++){
                word[j]=tolower(word[j]);
            }
            if(find(wd.begin(),wd.end(),word)==wd.end()){
                wd.push_back(word);
            }
        }

        for(size_t i=0;i<wd.size();i++){
            cout<<wd[i];
            if (i < wd.size() - 1){
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
```cpp

這段程式碼的功能是從標準輸入中讀取多行文字，將每行文字中的單詞提取出來，並將每個單詞轉換成小寫形式，然後去除重複的單詞，最後將每個不重複的單詞輸出到標準輸出。  
1. 創建了三個變數：input, word, words，其中input用於存儲從標準輸入中讀取的每行文字，word用於暫存從每行文字中提取的單詞，words是一個字串向量，用於存儲每行文字中的不重複單詞。  
讓我們一步步來解釋這段程式碼：  
1. 在每一次循環中，首先清空words向量。  
1. 使用istringstream將input設置為輸入串流，從而可以將每行文字逐個單詞地提取出來。  
1. 進入內部的while循環，將iss串流中的每個單詞提取出來，存儲在word變數中。  
1. 使用find()函數檢查words向量中是否已經存在該單詞。如果不存在(即find()返回words.end())，則將該單詞添加到words向量中。  
1. 內部的while循環結束後，words向量中包含了每行文字中的所有不重複單詞。  
1. 進入外部的for循環，對words向量中的每個單詞進行迭代，並將其輸出到標準輸出。同時，使用條件語句確保在每個單詞之後加上一個空格，除了最後一個單詞。  
1. 一行文字處理完畢後，換行並重新進入while循環，等待下一行輸入。
