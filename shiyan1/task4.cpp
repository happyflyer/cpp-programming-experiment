#include <iostream>
using namespace std;

int main()
{
    int salesamount, basis = 800;
    double commission, salary;

    cout << "����Ա�������ۻ���=" << endl;
    cin >> salesamount;
    commission = salesamount * 8 / 100;
    salary = basis + commission;
    cout << "Ա���Ĺ���=" << salary << endl;

    system("pause");
    return 0;
}
