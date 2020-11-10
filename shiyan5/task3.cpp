#include <iostream>
using namespace std;

int main()
{
    // 计算由键盘输入的两个数的最大公约数和最小公倍数。
    /**
     * 求最大公约数我们使用“辗转相除法”
     * 我们举个例子，比如160和96，过程是这样的：
     * (160, 96) -> (160%96, 96) -> (64, 96)
     * (96, 64) -> (96%64, 64) -> (32, 64)
     * (64, 32) -> (64%32, 32) -> (0, 32)
     * 发现有0了，我们就不用做了，剩下一个不是0的就是最大公约数
     * 假设我们输入的数字是a和b，由于我们每次做的操作总是a%b，因此这个结果一定总是小于b的
     * 每次操作后我们习惯大数在前，小数在后，就把a和b的位置交换一下
     * 
     * 我们刚开始写的是大数在前小数在后，其实不管前后，经过我们这种先取余再交换的操作，总是大数在前小数在后
     * (96, 160) -> (96%160, 160) -> (96, 160)
     * (160, 96) -> (160%96, 96) -> (64, 96)
     * ...
     * 
     * 经过上面步骤求得他们的最大公约数是k
     * 那么最小公约数是a*b/k
     * 
     */
    cout << "计算由键盘输入的两个最大公约数和最小公倍数" << endl;
    cout << "输入a，b" << endl;
    int input_a, input_b;
    int a_b;  // 每次取余操作后的结果
    int backup_a, backup_b;
    
    cin >> input_a >> input_b;
    backup_a = input_a, backup_b = input_b;

    do
    {
        a_b = input_a % input_b;
        if (a_b == 0)
        {
            cout << "两数最大公约数为" << input_b << endl;
        }
        else
        {
            input_a = input_b;
            input_b = a_b;
        }
    } while (a_b != 0);

    cout << "两数的最小公倍数为" << (backup_a * backup_b) / input_b << endl;

    system("pause");
    return 0;
}
