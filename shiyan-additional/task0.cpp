#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// 判断素数
bool is_prime(int num)
{
    for (int i = 2; i < num; i++)
        if (num % i == 0)
            return 0;
    return 1;
}

// 快速判断素数
bool isPrime(int num)
{
    if (num == 2 || num == 3)
        return 1;
    if (num % 6 != 1 && num % 6 != 5)
        return 0;
    int tmp = sqrt(num);
    for (int i = 5; i <= tmp; i += 6)
        if (num % i == 0 || num % (i + 2) == 0)
            return 0;
    return 1;
}

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (is_prime(i))
            cout << setw(4) << i;
        else
            cout << setw(4) << "   ";
        cout << ',';
        if (i % 10 == 0)
            cout << endl;
    }
    cout << endl;

    system("pause");
    return 0;
}
