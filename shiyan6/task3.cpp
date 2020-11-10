#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int num;        // 记录每次输入的数字
    int sum;        // 记录每次输入的num的各个位上的数字之和
    int backup_num; // 因为每次要对num做除法，取完num各个位上的数字之后，num就变成0了，所以每次需要提前备份一下num的值
    cout << "请输入" << n << "个数：" << endl;
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
            cout << "数字之和为7的有：" << endl;
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
