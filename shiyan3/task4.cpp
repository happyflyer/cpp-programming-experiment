#include <iostream>
using namespace std;

int main()
{
    cout << "������n��";
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
    cout << "�ܹ���Ҫ" << y << "Ԫ" << endl;

    system("pause");
    return 0;
}
