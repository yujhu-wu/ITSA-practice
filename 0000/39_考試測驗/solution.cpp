#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int grade[3];
    while(n--)
    {
        int counter = 0;
        int total = 0;
        for(int i = 0; i < 3; i++)
        {
            cin >> grade[i];
            total += grade[i];
            if(grade[i] >= 60)
            {
                counter++;
            }
        }
        if(counter == 3)
        {
            cout << "P" << endl;
        }
        else if(counter == 2)
        {
            if(total >= 220)
            {
                cout << "P" << endl;
            }
            else
            {
                cout << "M" << endl;
            }
        }
        else
        {
            if((grade[0] >= 80 || grade[1] >= 80) || grade[2] >= 80)
            {
                cout << "M" << endl;
            }
            else
            {
                cout << "F" << endl;
            }
        }
    }
    return 0;
}
