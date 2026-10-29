#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        int sum = 0;
        getline(cin, s);
        for(int i = 0; i<s.length(); i++)
        {
            sum += (int)s[i];
        }
        cout << sum << endl;
    }
    return 0;
}
