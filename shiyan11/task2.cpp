#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // 输入并存储一个字符串，统计该字符串中'a'字符（不区分大小写）的个数。
    string s;
    // cout << "请输入一个字符串：" << endl;
    cin >> s;
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 65 && s[i] == 97)
        {
            count++;
        }
    }

    cout << count << endl;

    system("pause");
    return 0;
}
