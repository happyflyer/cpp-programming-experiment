#include <iostream>
using namespace std;

int main()
{
    int class_num;   // 班级数量
    int student_num; // 学生数量
    double student_id;
    double chinese, math, english;
    cout << "请输入班级数量：";
    cin >> class_num;
    for (int i = 0; i < class_num; i++)
    {
        cout << "================================" << endl;
        cout << "请输入第" << i + 1 << "班的学生数量：";
        cin >> student_num;
        for (int j = 0; j < student_num; j++)
        {
            cout << "请输入第" << j + 1 << "个学生的学号、语文、数学、英语成绩：" << endl;;
            cin >> student_id >> chinese >> math >> english;
            cout << "学生" << student_id;
            if (chinese > math && chinese > english)
                cout << "语文成绩好！语文成绩为：" << chinese << endl;
            else if (math > english)
                cout << "数学成绩好！数学成绩为：" << math << endl;
            else
                cout << "英语成绩好！英语成绩为：" << english << endl;
        }
    }

    system("pause");
    return 0;
}
