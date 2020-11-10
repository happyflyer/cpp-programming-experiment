//缴税问题
#include <iostream>
using namespace std;

int main()
{
    double x; //第一个人的年薪
    cout << "请输入第一个人的年薪：";
    cin >> x;
    int n = 1;            //职工数
    double y, z, sum = 0; //y是全年应纳税所得额,z是全年缴纳金额,sum是总金额
    while (x > 0)
    {
        y = x - 60000;
        if (y < 0)
            z = 0;
        else
        {
            if (y > 0 && y <= 36000)
                z = y * 0.03;
            else
            {
                if (y > 36000 && y <= 144000)
                    z = y * 0.1 - 2520;
                else
                {
                    if (y > 144000 && y <= 300000)
                        z = y * 0.2 - 16920;
                    else
                    {
                        if (y > 300000 && y <= 420000)
                            z = y * 0.25 - 31920;
                        else
                        {
                            if (y > 420000 && y <= 660000)
                                z = y * 0.3 - 52920;
                            else
                            {
                                if (y > 660000 && y <= 960000)
                                    z = y * 0.35 - 89520;
                                else
                                    z = y * 0.45 - 181920;
                            }
                        }
                    }
                }
            }
        }
        cout << "该职工缴税：" << z << endl;
        n++;
        sum += z;
        cout << "请输入第" << n << "人的年薪：";
        cin >> x;
    }
    cout << "职工总人数是：" << n - 1 << "总缴税额是：" << sum << endl;

    return 0;
}
