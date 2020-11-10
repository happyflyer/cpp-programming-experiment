#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // 输入并存储一个字符串，将该字符串中的所有小写字母转换为大写字母后输出。
    string s;
    // cout << "请输入一个字符串：" << endl;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            s[i] -= 32;
        }
    }

    // cout << "转换后的字符串为：" << endl;
    cout << s << endl;

    system("pause");
    return 0;
}
