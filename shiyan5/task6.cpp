//��˰����
#include <iostream>
using namespace std;

int main()
{
    double x; //��һ���˵���н
    cout << "�������һ���˵���н��";
    cin >> x;
    int n = 1;            //ְ����
    double y, z, sum = 0; //y��ȫ��Ӧ��˰���ö�,z��ȫ����ɽ��,sum���ܽ��
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
        cout << "��ְ����˰��" << z << endl;
        n++;
        sum += z;
        cout << "�������" << n << "�˵���н��";
        cin >> x;
    }
    cout << "ְ���������ǣ�" << n - 1 << "�ܽ�˰���ǣ�" << sum << endl;

    return 0;
}
