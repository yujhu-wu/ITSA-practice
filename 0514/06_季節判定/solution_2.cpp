#include <iostream>

using namespace std;

int main()
{
    string season[] = {"Winter", "Spring", "Summer", "Autumn"};
    int m;
    while(cin >> m)
    {
        cout << season[(m % 12) / 3] << endl;
    }
    return 0;
}
