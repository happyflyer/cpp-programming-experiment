#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // ��д����Ҫ������ĳ��N��ͬѧ��ѧ�ż�3�ſγɼ���
    // ����ÿλͬѧ��ƽ���ɼ��Լ�ÿ�ſε�ƽ���ɼ���ѧ���������Ϊ20�ˣ�
    // ѧ��Ϊ3λ������
    // �ɼ�ҲΪ������
    // ƽ����ֻ�豣���������֣�
    // �γ�����Ϊ����Ŀ1����Ŀ2����Ŀ3����
    const int N = 20;
    const int C = 4;
    int n;
    cout << "������ѧ��������";
    cin >> n;
    if (n < N)
    {
        int a[n][C];
        cout << "�밴����˳������ѧ�ż��ɼ���" << endl;
        cout << setw(6) << "ѧ��";
        cout << setw(8) << "��Ŀ1";
        cout << setw(8) << "��Ŀ2";
        cout << setw(8) << "��Ŀ3";
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < C; j++)
            {
                cin >> a[i][j];
            }
        }
        // ����ѧ��ƽ����
        int sum;
        for (int i = 0; i < n; i++)
        {
            sum = 0;
            for (int j = 1; j < C; j++)
            {
                sum += a[i][j];
            }
            cout << "ѧ��Ϊ" << a[i][0] << "��ͬѧƽ����Ϊ��" << sum / (C - 1) << endl;
        }
        // �����Ŀƽ����
        for (int j = 1; j < C; j++)
        {
            sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += a[i][j];
            }
            cout << "��Ŀ" << j + 1 << "��ƽ����Ϊ��" << sum / n << endl;
        }
    }

    system("pause");
    return 0;
}
