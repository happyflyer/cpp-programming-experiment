#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // ��֪��const int M=100; int x[M][M],m;
    // Ҫ�󣺽��������¹����Զ����ɵ����ݴ����x�����У����������ͼ��ʾ�����Ρ�

    int const M = 100;
    int a[M][M];
    int m;
    cout << "������mֵ��";
    cin >> m;

    int num = 1;

    for (int j = 0; j < m; j++)
    {
        for (int i = m - 1; i >= j; i--)
        {
            a[i][j] = num++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                cout << setw(3);
            }
            else
            {
                cout << setw(6);
            }
            cout << a[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < m; i++)
    {
        cout << "======";
    }
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                cout << setw(3 * (m - i));
            }
            else
            {
                cout << setw(6);
            }
            cout << a[i][j];
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
