#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int num;        // ��¼ÿ�����������
    int sum;        // ��¼ÿ�������num�ĸ���λ�ϵ�����֮��
    int backup_num; // ��Ϊÿ��Ҫ��num��������ȡ��num����λ�ϵ�����֮��num�ͱ��0�ˣ�����ÿ����Ҫ��ǰ����һ��num��ֵ
    cout << "������" << n << "������" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        sum = 0;
        backup_num = num;
        while (num != 0)
        {
            sum += num % 10;
            num /= 10;
        }
        if (i == 0)
        {
            cout << "����֮��Ϊ7���У�" << endl;
        }
        if (sum == 7)
        {
            cout << backup_num << " ";
        }
    }
    cout << endl;

    system("pause");
    return 0;
}
