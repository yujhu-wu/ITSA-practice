#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int counter = 0;
        for(int i = 1; i <= n; i++)
        {
            if(i % 3 == 0)
            {
                counter += i;
            }
        }
        cout << counter << endl;
    }
    return 0;
}
