#include <iostream>
using namespace std;

int main()
{
    /**
     * ����
     * ��e
     * i��0��ʼ�Ľ����e
     * i��1��ʼ�Ľ����e-1
     */
    // ָ�����������ʱ����ֵ
    double x, *px = &x;
    // ָ���������������ֵ
    // double x, *px;
    // px = &x;

    int n, *pn = &n;
    double sum = 0, *psum = &sum;

    cout << "input x and n:";
    cin >> *px >> *pn;

    double term = 1; // ÿ���ֵ
    int i;           // ѭ������

    for (i = 1; i <= *pn; i++)
    {
        term *= *px / (i == 0 ? 1 : i); // ��Ϊi=0ʱi���ܵ�������������涨0!=1
        cout << "term" << i << "=" << term << endl;
        *psum += term;
    }
    cout << "sum=" << sum << endl;

    system("pause");
    return 0;
}
