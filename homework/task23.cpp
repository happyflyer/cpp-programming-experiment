#include <iostream>
using namespace std;

int main()
{
    // �Ӽ��������
    int a_0 = 1;   // ��һ��
    int d = 1;     // �Ȳ�
    int sign = 1;  // ÿ���������
    int a_n = a_0; // ÿ��
    int i = 0;     // ���ڼ���
    int n;         // �������n
    int sum = 0;
    cout << "������n��";
    cin >> n;
    do
    {
        sum += sign * a_n; // ÿ���ۼӵ�ʱ��ǰ���һ��������
        a_n += d;
        sign = -sign; // ��������
        i++;
    } while (i < n);
    cout << "1-2+3-4+5-6+...+99-100��ǰ" << n << "���Ϊ��" << sum << endl;

    system("pause");
    return 0;
}
