#include <iostream>
using namespace std;

int main()
{
    // 分数序列求和
    int fen_mu = 1, fen_zi = 2;
    double term; // 分数序列的每项
    double sum = 0;
    int new_fen_zi; // 存放每次循环时产生的新分子，用于产生新分数序列
    int N;
    cout << "请输入你要求和的项数N：";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        term = (double)fen_zi / fen_mu;
        // 下面这句话打印分数序列的每项
        // cout << "第" << i + 1 << "项为：" << fen_zi << " / " << fen_mu << " = " << term << endl;
        sum += term;
        new_fen_zi = fen_zi + fen_mu; // 旧分子和旧分母相加，得到一个新的数字
        fen_mu = fen_zi;              // 把旧分子赋值给新分母
        fen_zi = new_fen_zi;          // 把新的数字赋值给新分子
    }
    cout << "分数序列的和为：" << sum << endl;

    system("pause");
    return 0;
}
