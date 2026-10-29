//妍：S=1或2時，可用 i + j = D - 1 ;的條件來判斷要不要輸出j為*。
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        int D, S;
        cin >> D >> S;

        for (int i = 0; i < D; i++) {
            for (int j = 0; j < D; j++) {
                if ((S == 1 && i + j == D - 1) ||     // 右上到左下
                    (S == 2 && i == j) ||             // 左上到右下
                    (S == 3 && j == D - 1) ||         // 最右邊
                    (S == 4 && j == 0))               // 最左邊
                    cout << '*';
                else
                    cout << 'x';

                if (j < D - 1) cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
