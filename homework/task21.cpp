#include <iostream>
using namespace std;

int main()
{
    // �Ȳ��������
    int a_0 = 1;   // ��һ��
    int d = 3;     // �Ȳ�
    int a_n = a_0; // ÿ��
    int i = 0;     // ���ڼ���
    int n;         // �������n
    int sum = 0;
    cout << "������n��";
    cin >> n;
    do
    {
        sum += a_n;
        a_n += d;
        i++;
    } while (i < n);
    cout << "1+4+7+10+13+...��ǰ" << n << "���Ϊ��" << sum << endl;

    system("pause");
    return 0;
}
