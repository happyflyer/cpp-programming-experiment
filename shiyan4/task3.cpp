#include <iostream>
using namespace std;

int main()
{
    cout << "�����빤�䣺";
    int x, y;
    cin >> x;

    if (x < 1)
    {
        y = 0;
    }
    else
    {
        if (x < 5)
        {
            y = 7;
        }
        else
        {
            if (x < 10)
            {
                y = 14;
            }
            else
            {
                if (x < 20)
                {
                    y = 21;
                }
                else
                {
                    y = 28;
                }
            }
        }
    }
    cout << "�ݼ�����Ϊ��" << y << endl;

    system("pause");
    return 0;
}
