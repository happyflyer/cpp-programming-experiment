#include <iostream>
using namespace std;

int main()
{
    // 闰年问题

    cout << "请输入一个年份：";
    int year;
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0))
    {
        cout << year << " is a leap year" << endl;
    }
    else
    {
        cout << year << " is not a leap year" << endl;
    }

    system("pause");
    return 0;
}
