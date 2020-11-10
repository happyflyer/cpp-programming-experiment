#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Çósin(x)
    double x;
    cout << "ÇëÊäÈëx£º";
    cin >> x;
    double item = x;
    double sinx = item;
    int i = 1;
    do
    {
        item = -item * x * x / ((2 * i) * (2 * i + 1));
        sinx += item;
        i++;
    } while (fabs(item) > 1e-7);
    cout << "sin(" << x << ")=" << sinx << endl;

    system("pause");
    return 0;
}
