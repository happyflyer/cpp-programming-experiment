#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
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
// bool is_prime(int num)
// {
//     if (num == 2 || num == 3)
//         return 1;
//     if (num % 6 != 1 && num % 6 != 5)
//         return 0;
//     for (int i = 5; i <= num / 2; i += 6)
//         if (num % i == 0 || num % (i + 2) == 0)
//             return 0;
//     return 1;
// }

// 编制一个判定某数是否为素数的子函数prime，
// 用该子函数判定数组中的素数，
// 并输出这些素数。
void print_prime(int a[], int n)
{
    for (int *pa = a; pa < a + n; pa++)
        if (is_prime(*pa))
            cout << setw(4) << *pa;
    cout << endl;
}

int main()
{
    // 设有一个int型维数组a,长度为N，
    // 这里N为符号常量（注意N值应满足以下操作需求）。
    // 建立该数组，并完成以下任务：
    const int N = 100;
    // 随机产生n个10-100以内的整数存入数组a中（其中n<N），
    // 并按照每行输出5个的格式，输出该数组；
    int n;
    cout << "请输入随机整数的个数（<100）：";
    cin >> n;
    int a[n], *pa;

    if (n < N)
    {
        srand(time(NULL));
        for (pa = a; pa < a + n; pa++)
        {
            *pa = 10 + rand() % (100 - 10 + 1);
            cout << setw(4) << *pa;
            if ((pa - a + 1) % 5 == 0)
                cout << endl;
        }

        cout << "其中的素数为：" << endl;
        print_prime(a, n);
    }

    system("pause");
    return 0;
}
