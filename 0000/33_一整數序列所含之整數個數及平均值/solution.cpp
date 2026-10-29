#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int main()
{
    string number;
    while(getline(cin, number))
    {
        int counter = 0;
        double average = 0;
        double total = 0;
        int num;
        istringstream iss(number);
        while(iss >> num)
        {
            counter++;
            total += num;
        }
        average = total / counter;
        cout << "Size: " << counter << endl;
        cout << "Average: " << fixed << setprecision(3) << average << endl;

    }
    return 0;
}
