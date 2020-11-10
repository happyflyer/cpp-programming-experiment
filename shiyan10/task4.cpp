#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // 编写程序，要求输入某班N名同学的学号及3门课成绩，
    // 计算每位同学的平均成绩以及每门课的平均成绩（学生人数最多为20人，
    // 学号为3位整数，
    // 成绩也为整数，
    // 平均分只需保留整数部分，
    // 课程名称为：科目1、科目2、科目3）。
    const int N = 20;
    const int C = 4;
    int n;
    cout << "请输入学生人数：";
    cin >> n;
    if (n < N)
    {
        int a[n][C];
        cout << "请按下列顺序输入学号及成绩：" << endl;
        cout << setw(6) << "学号";
        cout << setw(8) << "科目1";
        cout << setw(8) << "科目2";
        cout << setw(8) << "科目3";
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < C; j++)
            {
                cin >> a[i][j];
            }
        }
        // 计算学号平均分
        int sum;
        for (int i = 0; i < n; i++)
        {
            sum = 0;
            for (int j = 1; j < C; j++)
            {
                sum += a[i][j];
            }
            cout << "学号为" << a[i][0] << "的同学平均分为：" << sum / (C - 1) << endl;
        }
        // 计算科目平均分
        for (int j = 1; j < C; j++)
        {
            sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += a[i][j];
            }
            cout << "科目" << j + 1 << "的平均分为：" << sum / n << endl;
        }
    }

    system("pause");
    return 0;
}
