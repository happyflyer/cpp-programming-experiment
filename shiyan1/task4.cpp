#include <iostream>
using namespace std;

int main()
{
    int salesamount, basis = 800;
    double commission, salary;

    cout << "输入员工的销售货款=" << endl;
    cin >> salesamount;
    commission = salesamount * 8 / 100;
    salary = basis + commission;
    cout << "员工的工资=" << salary << endl;

    system("pause");
    return 0;
}
