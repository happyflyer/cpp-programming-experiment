#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "������ѧ�ż����ſεĳɼ���" << endl;

    double xuehao, physics, math, english;
    cin >> xuehao >> physics >> math >> english;

    cout << setw(12) << "ѧ��";
    cout << setw(12) << "����";
    cout << setw(12) << "�ߵ���ѧ";
    cout << setw(12) << "��ͨ����";
    cout << setw(12) << "��ѧӢ��";
    cout << endl;

    cout << fixed;
    cout.precision(0);
    cout << setw(12) << xuehao;
    cout << setw(12) << "��һ��";
    cout.precision(2);
    cout << setw(12) << physics;
    cout << setw(12) << math;
    cout << setw(12) << english;
    cout << endl;

    cout << "��ͬѧ���ſγ�ƽ���ɼ�Ϊ��" << (physics + math + english) / 3 << endl;

    system("pause");
    return 0;
}
