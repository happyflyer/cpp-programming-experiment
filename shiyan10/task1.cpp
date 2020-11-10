#include <iostream>
using namespace std;

int main()
{
    // 设有一个元素皆为整数的n*n阶矩阵(n不超过10)，
    // 从键盘输入矩阵的阶数n及矩阵的元素，
    // 找出其主对角线上元素的最大值及其所在的行号（行下标+1）
    int N;
    cout << "请输入矩阵的阶：";
    cin >> N;
    int a[N][N];

    cout << "请输入一个" << N << "*" << N << "矩阵，每个数之间用空格间隔，每行输入完成后回车：" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> a[i][j];
        }
    }

    // int max_a = a[0][0];
    // int max_ai = 0, max_aj = 0;
    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < N; j++)
    //     {
    //         if (i == j && max_a < a[i][j])
    //         {
    //             max_a = a[i][j];
    //             max_ai = i;
    //             max_aj = j;
    //         }
    //     }
    // }

    int max_a = a[0][0];
    int max_ai = 0;
    for (int i = 0; i < N; i++)
    {
        if (max_a < a[i][i])
        {
            max_a = a[i][i];
            max_ai = i;
        }
    }

    cout << "对角线上最大元素为：" << max_a << "行号为：" << max_ai + 1 << endl;

    system("pause");
    return 0;
}
