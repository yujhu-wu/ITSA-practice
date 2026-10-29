#include<iostream>
#include<string>

using namespace std;

int main()
{
    string in;
    getline(cin, in);
    int p = 0;
    cin >> p;
    for (int i = 0; i < in.length(); i++)
    {
        if (isupper(in[i]))
        {
            in[i] = 'A' + (in[i] - 'A' + p) % 26;
        }
        else if (islower(in[i]))
        {
            in[i] = 'a' + (in[i] - 'a' + p) % 26;
        }
        else if (isdigit(in[i]))
        {
            in[i] = '0' + (in[i] - '0' + p) % 10;
        }
    }
    cout << in << endl;
    return 0;
}
