#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // ������ѧ����e�Ľ���ֵ
    int a_0 = 1;       // ��һ��
    int i = 1;         // ��ĸ�Ǹ��������ӵ��Ǹ���
    int i_jiecheng;    // ��ĸ�Ǹ��������ӵ��Ǹ����Ľ׳�
    double term = a_0; // ÿ��
    double result = 0;
    do
    {
        result += term;
        i_jiecheng = 1; // ÿ�ο�ʼ����׳�֮ǰ���׳˽����Ϊ1
        for (int j = 1; j <= i; j++)
        {
            i_jiecheng *= j;
        }
        term = 1.0 / i_jiecheng;
        i++;
    } while (fabs(term) > 1e-6);
    cout << "��ѧ����e�Ľ���ֵΪ��" << result << endl;

    system("pause");
    return 0;
}
