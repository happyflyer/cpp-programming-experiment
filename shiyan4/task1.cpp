#include <iostream>
using namespace std;

int main()
{
    cout << "请输入一个数：";
    int x, y;
    cin >> x;

    if (x < 0)
    {
        y = x;
    }
    else if (x >= 0 && x < 10)
        {
            y = 2 * x - 1;
        }
        else if (x >= 10)
            {
                y = 3 * x - 1;
            }
    cout << "y=" << y << endl;

    system("pause");
    return 0;
}
