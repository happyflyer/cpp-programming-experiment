#include <iostream>
using namespace std;

int main()
{
    cout << "请输入n：";
    int n, y;
    cin >> n;

    if (n >= 0 && n < 100)
    {
        y = 20 * n;
    }
    else
    {
        y = 16 * n;
    }
    cout << "总共需要" << y << "元" << endl;

    system("pause");
    return 0;
}
