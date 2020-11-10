#include <iostream>
using namespace std;

int main()
{
    int salary;
    int n = 1;          // 用于统计人数
    double tax;         // 用于记录每人的缴税额
    double sum_tax = 0; // 用于统计总缴税额

    do
    {
        cout << "请输入第" << n << "个人的年薪：";
        cin >> salary;

        if (salary < 0)
            break;

        if (salary < 60000)
            tax = 0;
        if (salary > 60000 && salary - 60000 < 36000)
            tax = (salary - 60000) * 0.03;
        if (salary - 60000 > 36000 && salary - 60000 < 144000)
            tax = (salary - 60000) * 0.1 - 2520;
        if (salary - 60000 > 144000 && salary - 60000 < 300000)
            tax = (salary - 60000) * 0.2 - 16920;
        if (salary - 60000 > 300000 && salary - 60000 < 420000)
            tax = (salary - 60000) * 0.25 - 31920;
        if (salary - 60000 > 420000 && salary - 60000 < 660000)
            tax = (salary - 60000) * 0.3 - 52920;
        if (salary - 60000 > 660000 && salary - 60000 < 960000)
            tax = (salary - 60000) * 0.35 - 85920;
        if (salary - 60000 > 960000)
            tax = (salary - 60000) * 0.45 - 181920;
        cout << fixed;
        cout.precision(2);
        cout << "该职工缴税：" << tax << endl;
        sum_tax += tax;

        n += 1;
    } while (true);

    cout << "职工总人数是：" << n << "，总缴税额是：" << sum_tax << endl;

    system("pause");
    return 0;
}
