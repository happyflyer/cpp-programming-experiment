#include <iostream>
using namespace std;

int main()
{
    cout << "The length of int(即整数类型) is:" << sizeof(int) << endl;
    cout << "The length of long(即长整数型)is :" << sizeof(long) << endl;
    cout << "The length of short(即短整数型)is :" << sizeof(short) << endl;
    cout << "The length of char(即字符型)is :" << sizeof(char) << endl;
    cout << "The length of float(即浮点数型)is :" << sizeof(float) << endl;
    cout << "The length of double(即双精度的浮点数型)is :" << sizeof(double) << endl;
    cout << "The length of bool(即布尔型)is :" << sizeof(bool) << endl;

    system("pause");
    //system函数表示要运行Dos操作系统的命令，
    //pause表示暂停（防止你的程序闪退的情况出现）
    //cls表示清楚屏幕，可以把用户的DOS屏幕清楚所有的输出结果。
    return 0;
}
