#include <iostream>

using namespace std;

int main()
{
    int special;
    cin >> special;
    int a[3];
    for(int i = 0; i < 3; i++){
        cin >> a[i];
    }
    int n;
    cin >> n;
    int a0 = 0, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0;
    int money = 0;
    while(n--){
        int b;
        cin >> b;
        int b1 = b % 10000000;
        int b2 = b % 1000000;
        int b3 = b % 100000;
        int b4 = b % 10000;
        int b5 = b % 1000;
        if(b == special){
            a0++;
        }
        else if(b == a[0] || b == a[1] || b == a[2]){
            a1++;
        }
        else if(b1 == (a[0] % 10000000) || b1 == (a[1] % 10000000) || b1 == (a[2] % 10000000)){
            a2++;
        }
        else if(b2 == (a[0] % 1000000) || b2 == (a[1] % 1000000) || b2 == (a[2] % 1000000)){
            a3++;
        }
        else if(b3 == (a[0] % 100000) || b3 == (a[1] % 100000) || b3 == (a[2] % 100000)){
            a4++;
        }
        else if(b4 == (a[0] % 10000) || b4 == (a[1] % 10000) || b4 == (a[2] % 10000)){
            a5++;
        }
        else if(b5 == (a[0] % 1000) || b5 == (a[1] % 1000) || b5 == (a[2] % 1000)){
            a6++;
        }
    }
    money = a0 * 2000000 + a1 * 200000 + a2 * 40000 + a3 * 10000 + a4 * 4000 + a5 * 1000 + a6 * 200;
    cout << a0 << " " << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << " " << a6 << endl;
    cout << money << endl;
    return 0;
}
