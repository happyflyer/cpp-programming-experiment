#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    /**
     * ѧ���ɼ�ͳ�ƣ�
     * �������30��ѧ���ĳɼ���0~100֮�����������
     * �����һά�����У����ѧ���ɼ���ÿ��10������
     * Ȼ��ͳ�Ʋ����90-100��80-80��70-79��60-69��С��60����������ε�ѧ������
     */
    const int N = 30;
    int a[N], *pa;
    srand(time(NULL));
    for (pa = a; pa < a + N; pa++)
        *pa = 0 + rand() % (100 - 0 + 1);

    // �������
    cout << "ѧ���ɼ�Ϊ��" << endl;
    for (pa = a; pa < a + N; pa++)
    {
        cout << setw(4) << *pa;
        if ((pa - a + 1) % 10 == 0)
            cout << endl;
    }

    int b[5], *pb; // ͳ�ƽ��
    for (pb = b; pb < b + 5; pb++)
        *pb = 0;
    for (pa = a, pb = b; pa < a + N; pa++)
    {
        if (*pa >= 90 && *pa <= 100)
            *pb += 1;
        if (*pa >= 80 && *pa < 90)
            *(pb + 1) += 1;
        if (*pa >= 70 && *pa < 80)
            *(pb + 2) += 1;
        if (*pa >= 60 && *pa < 70)
            *(pb + 3) += 1;
        if (*pa < 60)
            *(pb + 4) += 1;
    }

    // ���ͳ�ƽ��
    cout << "ѧ���ɼ�ͳ�����£�" << endl;
    cout << setw(6) << "������"
         << setw(8) << "90-100"
         << setw(8) << "80-89"
         << setw(8) << "70-79"
         << setw(8) << "60-69"
         << setw(8) << "60����" << endl;
    cout << setw(6) << "����";
    for (pb = b; pb < b + 5; pb++)
        cout << setw(8) << *pb;
    cout << endl;

    system("pause");
    return 0;
}
