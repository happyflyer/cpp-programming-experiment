#include <iostream>
using namespace std;

int main()
{
    // �ȱ��������
    int a_0 = 3;   // ��һ��
    int q = 2;     // �ȱ�
    int a_n = a_0; // ÿ��
    int i = 0;     // ���ڼ���
    int n;         // �������n
    int sum = 0;
    cout << "������n��";
    cin >> n;
    do
    {
        sum += a_n;
        a_n *= q;
        i++;
    } while (i < n);
    cout << "3+6+12+24+48+...��ǰ" << n << "���Ϊ��" << sum << endl;

    system("pause");
    return 0;
}
