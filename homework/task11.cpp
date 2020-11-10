#include <iostream>
using namespace std;

int main()
{
    // 以下是p68页存钱罐程序
    // int n , i = 0, money = 2, sum = 0;
    // cout << "已经存放了多少个星期的钱了：";
    // cin >> n;
    // cout << n << "个星期罐中的储蓄：" << endl;
    // do {
    //     sum = sum + money;
    //     cout << sum << "->";
    //     money = money + 2;
    //     i++;
    // } while (i < n);
    // cout << "\b  " << endl;
    // cout << "恭喜你的存钱罐里已经有" << sum << "元钱了\n" << endl;

    // 存钱罐程序改编
    int n , i = 0, money, sum = 0;
    cout << "已经存放了多少个星期的钱了：";
    cin >> n;
    do {
        cout << "第" << i + 1 << "星期你存入存钱罐多少钱：";
        cin >> money;
        sum += money;
        i++;
    } while (i < n);
    cout << "恭喜你的存钱罐里已经有" << sum << "元钱了\n" << endl;

    // 为n个学生写评语
    int n, i, student_id, score;
    cout << "你要为多少个学生写评语：";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "第" << i + 1 << "个学生的学号：";
        cin >> student_id;
        cout << "第" << i + 1 << "个学生的成绩：";
        cin >> score;
        cout << "你的学号是：" << student_id << "你的成绩为：";
        if (score > 90 && score < 100)
            cout << "A" << endl;
        if (score > 80 && score < 90)
            cout << "B" << endl;
        if (score > 70 && score < 80)
            cout << "C" << endl;
        if (score > 60 && score < 70)
            cout << "D" << endl;
    }

    system("pause");
    return 0;
}
