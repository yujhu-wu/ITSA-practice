#include <iostream>

using namespace std;

int main()
{
    int month, date;
    while(cin >> month >> date)
    {
        if((month == 1 && date >= 21) || (month == 2 && date <= 18))
        {
            cout << "Aquarius" << endl;
        }
        if((month == 2 && date >= 19) || (month == 3 && date <= 20))
        {
            cout << "Pisces" << endl;
        }
        if((month == 3 && date >= 21) || (month == 4 && date <= 20))
        {
            cout << "Aries" << endl;
        }
        if((month == 4 && date >= 21) || (month == 5 && date <= 21))
        {
            cout << "Taurus" << endl;
        }
        if((month == 5 && date >= 22) || (month == 6 && date <= 21))
        {
            cout << "Gemini" << endl;
        }
        if((month == 6 && date >= 22) || (month == 7 && date <= 22))
        {
            cout << "Cancer" << endl;
        }
        if((month == 7 && date >= 23) || (month == 8 && date <= 23))
        {
            cout << "Leo" << endl;
        }
        if((month == 8 && date >= 24) || (month == 9 && date <= 23))
        {
            cout << "Virgo" << endl;
        }
        if((month == 9 && date >= 24) || (month == 10 && date <= 23))
        {
            cout << "Libra" << endl;
        }
        if((month == 10 && date >= 24) || (month == 11 && date <= 22))
        {
            cout << "Scorpio" << endl;
        }
        if((month == 11 && date >= 23) || (month == 12 && date <= 21))
        {
            cout << "Sagittarius" << endl;
        }
        if((month == 12 && date >= 22) || (month == 1 && date <= 20))
        {
            cout << "Capricorn" << endl;
        }
    }
    return 0;
}
