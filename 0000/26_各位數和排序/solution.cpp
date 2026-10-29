#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int number[10] = {0};
    int counter[10] = {0};
    for(int i = 0; i < N; i++)
    {
        cin >> number[i];
        int m = number[i];
        while(m > 0)
        {
            counter[i] += m % 10;
            m /= 10;
        }
    }
     for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (counter[i] > counter[j] || (counter[i] == counter[j] && number[i] > number[j])) {
                swap(counter[i], counter[j]);
                swap(number[i], number[j]);
            }
        }
    }
    for(int i = 0; i < N; i++)
    {
        cout << number[i];
        if(i != N - 1)
        {
            cout << " ";
        }
        else
        {
            cout << endl;
        }
    }
    return 0;
}
