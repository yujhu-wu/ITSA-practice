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
        int num; // 用來存取讀取的數字
        istringstream iss(number); //建立字串流，用來解析 number 裡的數字
        while(iss >> num) //從iss讀取數字，一次讀取一個
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
