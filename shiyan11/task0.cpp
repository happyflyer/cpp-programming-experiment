#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // ´òÓ¡asciiÂë±í
    for (int i = 0; i < 128; i++)
    {
        cout << setw(6) << i << setw(6) << (char)i << endl;
    }

    system("pause");
    return 0;
}
