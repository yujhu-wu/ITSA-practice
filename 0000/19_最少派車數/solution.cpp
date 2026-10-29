#include <iostream>

using namespace std;

int main()
{
    int n;
    int s, d, max = 0;
    int t[25] = {0};
    cin >> n;

    for(int j = 0; j < n; j++)
    {
        cin >> s >> d;
        for(int i = s; i < d; i++)
        {
            t[i]++;
        }
    }
    for(int k = 0; k < 25; k++)
    {
        if(t[k] > max)
        {
            max = t[k];
        }
    }
    cout << max << endl;
    return 0;
}
