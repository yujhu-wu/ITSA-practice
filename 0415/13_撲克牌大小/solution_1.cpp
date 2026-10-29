#include<iostream>
#include<string>
#include<sstream>
using namespace std;

void sortPoke (string* a, int n);
int main()
{
    int input = 0, n = 0;
    string Str, s;

    while(cin >> input){ // 輸入測試資料筆數
        //cin.ignore(1,'\n'); // 消除於字串後的換行符號

        // 開始時動態分配一個足夠大的陣列
        const int maxSize = 100; // 假設最大資料筆數為100
        string* pokeS = new string[maxSize];

        for(int i = 0; i < input; i++) // 依資料筆數決定處理次數
        {
            getline(cin, Str); // 讀入一整行
            istringstream cutStr(Str); // 轉換成可分割型態

            while(getline(cutStr, s, ' ')) // 分割並推入陣列
            {
                pokeS[n++] = s;
            }

            sortPoke(pokeS, n); // 排序

            // 輸出排序結果
            for(int j = 0; j < n; j++)
            {
                if(j == n - 1) cout << pokeS[j] << endl;
                else cout << pokeS[j] << " ";
            }

            n = 0; // 重置 n
        }

        // 釋放動態分配的記憶體
        delete[] pokeS;
    }
    return 0;
}

void sortPoke (string* a, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            string t;
            if(a[i][0] > a[j][0])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(a[i][0] == a[j][0])
            {
                string t, bN = a[i].substr(1, 2), sN = a[j].substr(1, 2);
                istringstream bigN(bN);
                istringstream smaN(sN);
                int b = 0, s = 0;
                bigN >> b;
                smaN >> s;
                if(b < s)
                {
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
    }
}
