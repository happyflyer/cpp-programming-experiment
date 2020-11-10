#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // 输入并存储一个字符串，将该字符串中的每个字母加10后再将字符串输出。
    string s;
    cout << "请输入一个字符串：" << endl;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        // cout << s[i] << " ";
        s[i] += 10;
        // cout << (int)s[i] << endl;
        // if (s[i] < 0 || s[i] > 127)
        // {
        //     s[i] = '?';
        // }
    }

    cout << "转换后的字符串为：" << endl;
    cout << s << endl;

    system("pause");
    return 0;
}
