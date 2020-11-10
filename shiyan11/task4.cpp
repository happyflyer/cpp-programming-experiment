#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // 输入并存储一个字符串，将该字符串中的所有小写字母转换为大写字母后输出。
    string s;
    cout << "请输入一个字符串：" << endl;
    cin >> s;
    char c;
    cout << "请输入一个英文字母：" << endl;
    cin >> c;

    int i;

    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == c)
        {
            break;
        }
    }

    if (i == s.length())
        cout << "在字符串" << s << "中没有字母" << c << endl;
    else
        cout << "字母" << c << "在字符串" << s << "中第一次出现在第" << i + 1 << "个" << endl;

    system("pause");
    return 0;
}
