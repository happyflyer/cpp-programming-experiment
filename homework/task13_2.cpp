#include <iostream>
using namespace std;

int get_max_factor(int a, int b)
{
    int a_b;
    do
    {
        a_b = a % b;
        a = b;
        b = a_b;
    } while (a_b != 0);
    return a;
}

int main()
{
    // 这个也是分数求和
    // 验证一下是否存在分数中间计算误差，不用管
    // 结果证明中间计算分数没有误差
    // 或者误差并不大，不影响结果
    int fen_mu_of_term = 1, fen_zi_of_term = 2, new_fen_zi_of_term;
    int fen_mu_of_sum = 1, fen_zi_of_sum = 0;
    int fen_mu_temp, fen_zi_temp, max_factor_temp;
    int n;
    cout << "请输入你要求和的项数N：";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "第" << i + 1 << "项为：\t\t\t" << fen_zi_of_term << " / " << fen_mu_of_term << endl;
        fen_zi_temp = fen_zi_of_sum * fen_mu_of_term + fen_mu_of_sum * fen_zi_of_term;
        fen_mu_temp = fen_mu_of_sum * fen_mu_of_term;
        max_factor_temp = get_max_factor(fen_zi_temp, fen_mu_temp);
        fen_zi_of_sum = fen_zi_temp / max_factor_temp;
        fen_mu_of_sum = fen_mu_temp / max_factor_temp;
        cout << "前" << i + 1 << "项的和为：\t\t" << fen_zi_of_sum << " / " << fen_mu_of_sum << endl;
        new_fen_zi_of_term = fen_zi_of_term + fen_mu_of_term;
        fen_mu_of_term = fen_zi_of_term;
        fen_zi_of_term = new_fen_zi_of_term;
    }
    cout << "分数序列的和为：" << fen_zi_of_sum << " / " << fen_mu_of_sum << " = " << (double)fen_zi_of_sum / fen_mu_of_sum << endl;
}
