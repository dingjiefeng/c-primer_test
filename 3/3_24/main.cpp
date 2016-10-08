/**
 * 3.24练习，利用迭代器重做3.3.3节最后一个练习（3.20）
 * 1.读入一组整数并把他们存入一个vector对象
 * 2.先输出第一个和最后一个的和；再输出第二个和倒数第二个的和...以此类推
 */
#include <iostream>
#include <vector>

using namespace std;
/**
 * 利用迭代器依次首尾求和
 * @param v
 */
void sum1(vector<int> v){
    auto beg = v.begin();
    auto end = v.end()-1;
    for (auto i = 0; i < (v.end() - v.begin()) / 2; ++i)
    {
        cout << *(beg + i) + *(end - i) << " ";
    }
    if ((v.end() - v.begin()) % 2 != 0)
    {
        cout << *(beg + (v.end() - v.begin()) / 2) << endl;
    }
}
int main()
{
    vector<int> ivec;
    int sum = 0;
    char key;
    int a;
    //part 1 读入一组整数、存入vector
    cout << "输入一个整数" << endl;
    while (cin >> a)
    {
        ivec.push_back(a);
        cout << "是否继续（y/n)" << endl;
        cin >> key;
        if (key != 'y')
        {
            break;
        }
        cout << "请继续输入下一个整数" << endl;
    }

    //part 2 计算求和
    sum1(ivec);
    return 0;
}