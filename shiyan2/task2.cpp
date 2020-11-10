#include <iostream>
using namespace std;

int main()
{
    double G = 6.67259e-11;
    double m1 = 1.987e30;
    double m2 = 5.975e24;
    double R = 1.495e11;

    double F = G * m1 * m2 / (R * R);
    cout << "F=" << F << endl;

    system("pause");
    return 0;
}
