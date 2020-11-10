#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    /**
     * 学生成绩统计：
     * 随机产生30名学生的成绩（0~100之间的整数），
     * 存放于一维数组中；输出学生成绩，每行10个数。
     * 然后统计并输出90-100、80-80、70-79、60-69、小于60这五个分数段的学生人数
     */
    const int N = 30;
    int a[N], *pa;
    srand(time(NULL));
    for (pa = a; pa < a + N; pa++)
        *pa = 0 + rand() % (100 - 0 + 1);

    // 输出数组
    cout << "学生成绩为：" << endl;
    for (pa = a; pa < a + N; pa++)
    {
        cout << setw(4) << *pa;
        if ((pa - a + 1) % 10 == 0)
            cout << endl;
    }

    int b[5], *pb; // 统计结果
    for (pb = b; pb < b + 5; pb++)
        *pb = 0;
    for (pa = a, pb = b; pa < a + N; pa++)
    {
        if (*pa >= 90 && *pa <= 100)
            *pb += 1;
        if (*pa >= 80 && *pa < 90)
            *(pb + 1) += 1;
        if (*pa >= 70 && *pa < 80)
            *(pb + 2) += 1;
        if (*pa >= 60 && *pa < 70)
            *(pb + 3) += 1;
        if (*pa < 60)
            *(pb + 4) += 1;
    }

    // 输出统计结果
    cout << "学生成绩统计如下：" << endl;
    cout << setw(6) << "分数段"
         << setw(8) << "90-100"
         << setw(8) << "80-89"
         << setw(8) << "70-79"
         << setw(8) << "60-69"
         << setw(8) << "60以下" << endl;
    cout << setw(6) << "人数";
    for (pb = b; pb < b + 5; pb++)
        cout << setw(8) << *pb;
    cout << endl;

    system("pause");
    return 0;
}
