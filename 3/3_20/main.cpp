/**
 * 3.20练习：
 * 1.读入一组整数并把他们存入一个vector对象
 * 2.1 将每对相邻的整数之和输出出来
 * 2.2 先输出第一个和最后一个的和；再输出第二个和倒数第二个的和...以此类推
 */
#include <iostream>
#include <vector>

using namespace std;
/**
 * 完成2.1功能，输出vec相邻两整数的和
 * @param vec:整型vector
 */
void sum1(vector<int> vec) {
    if (vec.size() == 1)
    {
        cout << "只有一个整数！" << endl;
    } else
    {
        for (decltype(vec.size()) i = 0; i < vec.size() - 1; ++i)
        {
            cout << vec[i] + vec[i + 1] << " ";
            if ((i+1) % 5 == 0){cout << endl;}
        }
    }
}
/**
 * 完成2.2功能，输出首尾之和
 * @param vec
 */
void sum2(vector<int> vec){
    if (vec.size() == 1)
    {
        cout << "只有一个整数！" << endl;
    } else
    {
        for (auto i = 0; i < (vec.size() / 2); ++i)
        {
            cout << vec[i] + vec[vec.size() - 1 - i] << " ";
            if ((i + 1) % 5 == 0)
            {
                cout << endl;
            }
        }
        if (vec.size() % 2 != 0)
        {
            cout << vec[vec.size() / 2] << endl;
        }
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

    //part 2
    //sum1(ivec);
    sum2(ivec);
    return 0;
}