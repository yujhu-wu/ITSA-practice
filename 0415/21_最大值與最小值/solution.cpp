#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    float a[10]; //double也可以

    for(int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 10); //sort(起始位置, 結束位置);
    cout << "maximum:" << fixed << setprecision(2) << a[9] << endl;
    cout << "minimum:" << fixed << setprecision(2) << a[0] << endl;

    return 0;
}
