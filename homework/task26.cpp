#include <iostream>
using namespace std;

int main()
{
    // ����׳�֮��
    int i = 1;      // ��ĸ�Ǹ��������ӵ��Ǹ���
    int i_jiecheng; // ��ĸ�Ǹ��������ӵ��Ǹ����Ľ׳�
    int n;          // �������n
    int result = 0;
    cout << "������n��";
    cin >> n;
    do
    {
        i_jiecheng = 1; // ÿ�ο�ʼ����׳�֮ǰ���׳˽����Ϊ1
        for (int j = 1; j <= i; j++)
        {
            i_jiecheng *= j;
        }
        result += i_jiecheng;
        i++;
    } while (i <= n);
    cout << n << "��׳�֮��Ϊ��" << result << endl;

    system("pause");
    return 0;
}
