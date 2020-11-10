#include <iostream>
using namespace std;

int main()
{
    // 编程实现十进制整数和八进制整数之间的转换（即将10进制数转换为8进制数，或将8进制数转换为10进制数）。
    /**
     * 八进制转十进制：
     * 比如：八进制数字14代表1*8^2+4*8^0 
     * 我们想把八进制数字14转为十进制，就需要吧1和4两个数字拿出来
     * 如何拿出来呢？自然14%10就得到4了，然后14/10得到1，然后1%10就得到1了
     * 我们通过x%10得到个位数，然后x/10去掉个位数，不断循环，不管这个八进制数字有多大，我们也可以拿到多有位上的数字，
     * 然后依次乘以位权8的n次方，就得到十进制的结果了
     * 
     * 十进制转八进制
     * 我们习惯使用短除法
     * 比如：十进制数字10转为八进制应该是1*8^1+2*8^0，也就是对应八进制数字12
     * 我们习惯使用短除法，是这样的：
     * 8 \__10__ 2
     * 8 \___1__ 1
     *       0
     * 然后余数逆序（从下到上）写出来
     * 我们可以让程序循环做这个事情，每次取余，余数就是得到的八进制数字的从低位到高位的上的数，
     * 然后再做整除，整除结果进行下次取余
     * 不管我们输入的十进制数字有多大，最后都被最终整除为0
     * 余数从下到上乘以位权10的n次方，就组装成了我们想要的八进制的结果了
     * 
     */
    cout << "按1，八进制转十进制\n按2，十进制转八进制\n请根据提示操作：";

    int num;
    cin >> num;

    int input_oct; // 输入的八进制数
    int input_dec; // 输入的八进制数

    int output_dec = 0;
    int output_oct = 0;

    int n;          // 位上的数字
    int weight = 1; // 位权

    switch (num)
    {
    case 1:
        cout << "请输入一个八进制数：";
        cin >> input_oct;
        do
        {
            n = input_oct % 10;
            input_oct = input_oct / 10;
            output_dec += n * weight;
            weight *= 8;
        } while (input_oct != 0);
        cout << "转换为的十进制数为：" << output_dec << endl;
        break;

    case 2:
        cout << "请输入一个十进制数：";
        cin >> input_dec;
        do
        {
            n = input_dec % 8;
            input_dec = input_dec / 8;
            output_oct += n * weight;
            weight *= 10;
        } while (input_dec != 0);
        cout << "转换为的八进制数为：" << output_oct << endl;
        break;

    default:
        cout << "请根据提示操作！" << endl;
        return -1;
    }

    system("pause");
    return 0;
}
