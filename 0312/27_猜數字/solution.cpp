#include <iostream>

using namespace std;

int main()
{
    int m;
    cin >> m;
    int que[4] = {0};
    for(int i = 0; i < 4; i++)
    {
        que[i] = m % 10;
        m /= 10;
    }
    int n;
    while(cin >> n)
    {
        if(n == 0)
        {
            break;
        }
        int ans[4] = {0};
        for(int j = 0; j < 4; j++)
        {
            ans[j] = n % 10;
            n /= 10;
        }
        int a = 0, b = 0;
        for(int i = 0; i < 4; i++)
        {
            if(que[i] == ans[i])
            {
                a++;
            }
            else if(que[i] == ans[i - 1] || que[i] == ans[i - 2] || que[i] == ans[i - 3] || que[i] == ans[i + 1] || que[i] == ans[i + 2] || que[i] == ans[i + 3])
            {
                b++;
            }
        }
        cout << a << "A" << b << "B" << endl;
    }
    return 0;
}
