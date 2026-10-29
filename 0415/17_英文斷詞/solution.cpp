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
