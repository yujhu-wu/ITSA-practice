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
