#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // ��sinx�Ľ���ֵ
    /**
     * ����̩��չ����ʽ��
     * sin(x) = x - x^3/3! + x^5/5! - x^7/7! + ...
     * �ҹ��ɣ����Է����ʼ��һ����x��֮���ÿһ��item(n)������д��ǰһ��item(n-1)������һ�㶫��������ʽ���£�
     * item(n) = item(n-1) * x * x / ( (2*n) * (2*n+1) )
     * �Ǿ͸�������߼�ȥдѭ��
     * 
     */
    int degree;
    double x;                // ת����Ļ���ֵ
    double pi = 3.141592654; // pi����

    cout << "������һ���Ƕȣ�";
    cin >> degree;
    x = degree * pi / 180;

    double item = x;
    double sinx = item;
    int n = 1; // ���ڼ���

    do
    {
        item = -item * x * x / ((2 * n) * (2 * n + 1)); // ����µ�item
        sinx += item;
        n += 1;
    } while (abs(item) > 1e-7); // Ҫ��item�ľ���ֵ�㹻С���Ϳ��Ա�֤����С

    cout << "sin(" << x << ")=" << sinx << endl;

    system("pause");
    return 0;
}
