#include <iostream>
using namespace std;

int main()
{
    // ��1��	�Զ�����쳲���������ǰ10���ֵ����������a�������
    // ��쳲���������ǰ�����ֵΪ1���ӵ����ʼ��ÿһ���ֵ��ǰ����ֵ�ĺͣ���
    const int N = 10;
    int a[N + 1];
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i < N; i++)
    {
        a[i] = a[i - 2] + a[i - 1];
    }
    cout << "�Զ����ɵ�" << N << "��������" << endl;
    for (int i = 1; i < N; i++)
    {
        cout << " " << a[i];
    }
    cout << endl;

    // ��2��	�����������һ�����ݲ�������a��ʹ������a�е�Ԫ����Ȼ��������
    cout << "�������������ݣ�";
    int x;
    cin >> x;
    int j = 0; // ��¼xӦ�ò����λ��
    while (x > a[j])
    {
        j++;
    }
    // ���´�ӡ��һ��xӦ�ò���λ�õ��±�
    // cout << j << endl;
    for (int i = N; i > j; i--)
    {
        a[i] = a[i - 1]; // �±�j�Ժ��Ԫ������������һλ
    }
    a[j] = x; // �±�j��Ԫ�ظ�ֵΪ�µ�ֵ
    cout << "��������������Ϊ��" << endl;
    for (int i = 0; i < N + 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // ��3��	ɾ������a�е��ظ����ݣ������ɾ����Ľ����
    int pos = 1; // ��¼������Ҫ���������ݸ���
    int k;
    for (int i = 1; i < N + 1; i++) // �ӵڶ���Ԫ�ؿ�ʼ�����ο����Ƿ���ǰ���Ѿ������Ԫ���Ƿ����
    {
        for (k = 0; k < pos; k++) // ѭ���Ѿ������Ԫ��
        {
            if (a[i] == a[k])
            {
                break;
            }
        }
        if (k >= pos) // ����Ƚ�֮����pos֮ǰ��Ԫ�ض�����ȣ���ô��ǰԪ�ؿ��Ա���������
        {
            a[pos] = a[i];
            pos++;
        }
    }
    cout << "ȥ�غ����������Ϊ��" << endl;
    for (int i = 0; i < pos; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;


    // ��4��	�������a����Ԫ�ص�ƽ��ֵ���������
    double sum = 0;
    for (int i = 0; i < pos; i++)
    {
        sum += a[i];
    }
    cout << fixed;
    cout.precision(2);
    cout << "����a����Ԫ�ص�ƽ��ֵΪ��" << sum / pos << endl;

    // ��5��	ɾ������a�����е���ƽ��ֵ��Ԫ�أ������ɾ����Ľ����
    // ע������ֻ��ʹ��һ�����顣
    double avg = sum / pos;
    int pos2 = 0; // ��¼������Ҫ���������ݸ���
    for (int i = 0; i < pos; i++)
    {
        if (a[i] > avg)
        {
            a[pos2] = a[i];
            pos2++;
        }
    }
    cout << "�����и���ƽ��ֵ��Ԫ�أ�" << endl;
    for (int i = 0; i < pos2; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;


    system("pause");
    return 0;
}
