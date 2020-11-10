#include <iostream>
using namespace std;

int main()
{
    cout << "请输入一个小写字母：";
    char a;
    cin >> a;
    cout << "输入的小写字母是：" << (char)a << "，其ASCII码是：" << (int)a << endl;
    cout << "输入的小写字母是：" << (char)(a - 32) << "，其ASCII码是：" << (int)a - 32 << endl;

    system("pause");
    return 0;
}
