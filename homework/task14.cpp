#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // ��pi�Ľ���ֵ����ͳ���ۼӵ�����
    int i = 1;       // �������еķ�ĸ
    int j = 0;       // ��¼�ۼƵ�����
    int sign = 1;    // ÿ��ķ���
    double term = 1; // ÿ��
    double pi_4 = 0;
    do
    {
        pi_4 += term;
        i += 2;
        sign = -sign;          // ��������
        term = sign * 1.0 / i; // �������
        j++;
    } while (fabs(term) >= 1e-6);
    cout << "pi = " << 4 * pi_4 << endl;
    cout << "�ۼӵ�����Ϊ��" << j << endl;

    system("pause");
    return 0;
}
