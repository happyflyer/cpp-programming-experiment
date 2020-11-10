#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "请输入学号及三门课的成绩：" << endl;

    double xuehao, physics, math, english;
    cin >> xuehao >> physics >> math >> english;

    cout << setw(12) << "学号";
    cout << setw(12) << "姓名";
    cout << setw(12) << "高等数学";
    cout << setw(12) << "普通物理";
    cout << setw(12) << "大学英语";
    cout << endl;

    cout << fixed;
    cout.precision(0);
    cout << setw(12) << xuehao;
    cout << setw(12) << "赵一丁";
    cout.precision(2);
    cout << setw(12) << physics;
    cout << setw(12) << math;
    cout << setw(12) << english;
    cout << endl;

    cout << "该同学三门课程平均成绩为：" << (physics + math + english) / 3 << endl;

    system("pause");
    return 0;
}
