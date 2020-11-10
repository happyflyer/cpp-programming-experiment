#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // 已知有const int M=100; int x[M][M],m;
    // 要求：将按照如下规律自动生成的数据存放于x数组中，并输出如下图所示三角形。

    int const M = 100;
    int a[M][M];
    int m;
    cout << "请输入m值：";
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
