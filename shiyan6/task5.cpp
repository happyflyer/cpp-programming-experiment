#include <iostream>
using namespace std;

int main()
{
    int n; // 行数
    cout << "请输入图案的行数：" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
