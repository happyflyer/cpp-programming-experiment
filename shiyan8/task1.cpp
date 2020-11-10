#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int N = 15;
    double a[N + 1];
    double sum = 0;

    // ��1��	��������15��ʵ�����ݴ�������a�У�������ÿ�����5���ĸ�ʽ����������飻
    cout << "������" << N << "��ʵ������" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < N; i++)
    {
        cout << setw(12) << a[i];
        if ((i + 1) % 5 == 0)
        {
            cout << endl;
        }
    }
    cout << endl;

    // ��2��	��������a��15��Ԫ�ص�ƽ��ֵ���������洢��a����Ч��Χ��ĩλ
    // ����a������15����ЧԪ�أ����ԣ���ƽ��ֵӦ�ñ�����a[15]�С���ʾ�����鳤��Ӧ��С��16����
    a[N] = sum / N;

    // ��3��	����a������ǰ15��Ԫ�ص�λ�ã������ƽ��ֵ��Ԫ��a[15]���ֲ�����
    // ���������ǣ�Ԫ��ֵС��ƽ��ֵ�ķ��������벿�֡����ڵ���ƽ��ֵ�ķ�������ǰ�벿��
    // ֻ��ʹ������a�����ܽ������������顣
    cout << "�����������Ϊ��" << endl;
    int i = 0, j = N - 1;
    while (i < j)
    {
        if (a[i] < a[N] && a[j] > a[N])
        {
            // ������仰ʵ�ֲ�����temp�м����������������ֵ
            a[i] = a[i] + a[j];
            a[j] = a[i] - a[j];
            a[i] = a[i] - a[j];
            i++;
            j--;
        }
        else if (a[i] > a[N])
        {
            i++;
        }
        else if (a[j] < a[N])
        {
            j--;
        }
    }

    // ��4��	��������Ժ��a���顣
    for (int i = 0; i <= N; i++)
    {
        cout << setw(12) << a[i];
        if ((i + 1) % 5 == 0)
        {
            cout << endl;
        }
    }
    cout << endl;

    system("pause");
    return 0;
}
