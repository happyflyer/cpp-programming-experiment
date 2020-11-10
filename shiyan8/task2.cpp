#include <iostream>
#include <iomanip>
using namespace std;

// ��1��	����һ���ж�ĳ���Ƿ�Ϊ�������Ӻ���prime
bool is_prime(int x) // �ж�һ�������Ƿ�Ϊ����
{
    int flag = true;
    for (int i = 2; i < x / 2 + 1; i++)
    {
        if (x % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    const int N = 10;
    int a[N];
    int b[N];

    // ��2��	��������10�����ݣ���Щ������������Ҳ��ż������������a�У�
    cout << "������" << N << "����������" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    // ��3��	���a�����е����ֵ�����±ꡢ��Сֵ�����±ꣻ
    int max_a = a[0];
    int max_ai = 0;
    int min_a = a[0];
    int min_ai = 0;
    for (int i = 1; i < N; i++)
    {
        if (max_a < a[i])
        {
            max_a = a[i];
            max_ai = i;
        }
        if (min_a > a[i])
        {
            min_a = a[i];
            min_ai = i;
        }
    }
    cout << "a���������ֵΪ��" << endl;
    cout << max_a << "�����±�Ϊ��" << max_ai << endl;
    cout << "a��������СֵΪ��" << endl;
    cout << min_a << "�����±�Ϊ��" << min_ai << endl;

    // ��4��	ͨ�������Ӻ���prime���ҳ�����a�����е�����������������b�У�
    int j = 0; // ��¼����b��Ԫ���±�
    for (int i = 0; i < N; i++)
    {
        if (is_prime(a[i]))
        {
            b[j] = a[i];
            j++;
        }
    }

    // ��5��	���򣨼��Ӻ�b[n-1]��ǰb[0]�����b��Ԫ�أ��������Ϊ10��
    for (int k = j - 1; k >= 0; k++)
    {
        cout << setw(12) << b[k];
    }
    cout << endl;

    system("pause");
    return 0;
}
