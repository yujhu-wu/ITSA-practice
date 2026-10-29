#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input, output;
    bool a = 1; //布林變數，用來記錄是否為回文

    while(cin >> input)
    {
		    //將 input 反轉並存入 output
        for(int i = input.length() - 1; i >= 0; i--)
        {
            output[input.length() - 1 - i] = input[i];
        } 
        //檢查是否為回文
        for(int j = 0; j< input.length(); j++)
        {
            if(input[j] != output[j])
            {
                a = 0;
                break;
            }
            else
            {
                a = 1;
            }
        }
        //如果 a == 1（回文），輸出 "YES" //如果 a == 0（非回文），輸出 "NO"
        a ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}
