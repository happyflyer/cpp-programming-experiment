#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // ����ʮ�����֣���������ż��
    // ��ż����ǰ�������ں�
    const int N = 10;
    int a[N];

    cout << "������" << N << "����������" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    cout << "�����������Ϊ��" << endl;
    int i = 0, j = N - 1;
    while (i < j)
    {
        if (a[i] % 2 == 1 && a[j] % 2 == 0)
        {
            a[i] = a[i] + a[j];
            a[j] = a[i] - a[j];
            a[i] = a[i] - a[j];
            i++;
            j--;
        }
        else if (a[i] % 2 == 0)
        {
            i++;
        }
        else if (a[j] % 2 == 1)
        {
            j--;
        }
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

    system("pause");
    return 0;
}
