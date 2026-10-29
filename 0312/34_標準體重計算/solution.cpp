#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int height, sex;
    float kilogram;
    while(cin >> height >> sex)
    {
        if(sex == 1)
        {
            kilogram = (height - 80) * 0.7;
        }
        else if(sex == 2)
        {
            kilogram = (height - 70) * 0.6;
        }
        cout << fixed << setprecision(1) << kilogram << endl;
    }
    return 0;
}
