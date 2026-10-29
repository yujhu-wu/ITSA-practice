#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    getline(cin, a);
    int p;
    cin >> p;

		//大寫A~Z → 小寫a~z → 數字0~9
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z'){
            a[i] = ((a[i] - 'A' + p) % 26) + 'A';
        } //% 26 是為了讓加密後的字母不要超過 Z，而是從 A 重新開始循環
          // + 'A' 是為了把「數字位置」轉回真正的字母

        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = ((a[i] - 'a' + p) % 26) + 'a';
        }
        else if (a[i] >= '0' && a[i] <= '9')
        {
            a[i] = ((a[i] - '0' + p) % 10) + '0';
        }
    }

    cout << a << endl;
    return 0;
}
