#include <iostream>
#include <string>

using namespace std;

int main()
{
    char letter[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'X', 'Y', 'W', 'Z', 'I', 'O'};
    int number[26] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35};
    int n[9] = {0};  // 用來裝後面 9 位數字
    string input;
    int x1 = 0, x2 = 0;
    int p = 0;
    while(getline(cin, input))
    {
        for(int i = 0; i < 26; i++)
        {
		        char c = input[0]; //把輸入的「身分證字號」的第一個字母抓出來，放到變數 c 裡。
            if(c == letter[i])
            {
                x1 = number[i] / 10;
                x2 = number[i] % 10 * 9;
                //(1)：x2 = number[i] % 10;
            } //例如 A → 10，十位是 1、個位是 0 → x1 = 1, x2 = 0*9 = 0
        }
        // 把 input[1] 到 input[9] 這九個字元轉成數字
        for(int i = 1; i < 10; i++)
        {
            n[i - 1] = input[i] - '0';
            //(2)：n[i]=input[i]-'0';
        }
        p = x1 + x2 + n[0] * 8 + n[1] * 7 + n[2] * 6 + n[3] * 5 + n[4] * 4 + n[5] * 3 + n[6] * 2 + n[7] + n[8];
        //(3)：p = x1 + x2*9 + n[1] * 8 + n[2] * 7 + n[3] * 6 + n[4] * 5 + n[5] * 4 + n[6] * 3 + n[7] * 2 + n[8] + n[9];
        if(p % 10 == 0)
        {
            cout << "CORRECT!!!" << endl;
        }
        else
        {
            cout << "WRONG!!!" << endl;
        }
    }
    return 0;
}
