#include <iostream>
using namespace std;

int main()
{
    cout << "������һ��������";
    int x, y;
    cin >> x;

    if (x >= 1 && x < 10)
    {
        y = 3 * x - 5;
    }
    else
    {
        y = x + 2;
    }
    cout << "y=" << y << endl;

    system("pause");
    return 0;
}
