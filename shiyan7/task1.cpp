#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    double y;
    double f(int x); // ��������
    cout << "������x:";
    cin >> x;
    y = f(x); // ��������
    cout << "y=" << y << endl;

    system("pause");
    return 0;
}

double f(int x)
{
    if (x > 0)
        return sqrt(x);
    else if (x == 0)
        return x;
    else
        return fabs(x);
}
