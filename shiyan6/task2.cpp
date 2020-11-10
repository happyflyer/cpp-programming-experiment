#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int cocks;
    int hens;
    int chicken;
    for (cocks = 0; cocks < 20; cocks++)
    {
        for (hens = 0; hens <= 33; hens++)
        {
            chicken = 100 - cocks - hens;
            if (chicken % 3 == 0 && cocks * 5 + hens * 3 + chicken / 3 == 100)
            {
                cout << "cocks=" << cocks << setw(8) << "hens=" << hens << setw(12) << "chicken=" << chicken << endl;
            }
        }
    }

    system("pause");
    return 0;
}
