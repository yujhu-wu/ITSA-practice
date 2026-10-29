//substr(pos位置, len長度)
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;

    while(cin >> a >> b) {
        int cnt = 0;
        int la = a.length();
        int lb = b.length();

        // 遍歷 `b`，找長度等於 `a` 的子字串
        for(int i = 0; i <= lb - la; i++) {
            if(b.substr(i, la) == a) {
                cnt++;
            }
        }

        cout << cnt << endl; // 輸出計數結果
    }

    return 0;
}
