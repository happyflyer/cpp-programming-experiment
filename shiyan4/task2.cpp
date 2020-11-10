#include <iostream>
using namespace std;

int main()
{
    cout << "请输入三个数：";
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
        if (a > c)
        {
            cout << a << endl;
        }
        else
        {
            cout << c << endl;
        }
    else 
        if (b > c)
        {
            cout << b << endl;
        }
        else
        {
            cout << c << endl;
        }

    system("pause");
    return 0;
}
