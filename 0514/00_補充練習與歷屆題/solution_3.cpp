#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int a = 0; a <= N / 50; ++a) { // a: 50元數量
        for (int b = 0; b <= (N - 50 * a) / 10; ++b) { // b: 10元
            for (int c = 0; c <= (N - 50 * a - 10 * b) / 5; ++c) { // c: 5元
                int d = N - 50 * a - 10 * b - 5 * c; // 剩下用 1元補足
                cout << a << " " << b << " " << c << " " << d << endl;
            }
        }
    }

    return 0;
}
