/**
 * 3.42练习
 *将含有整数元素的vector对象拷贝给一个整型数组
 */
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    //part 1 建立vector存放一组整数元素
    vector<int> ivec;
    int tmp = 0;
    char key;
    cout << "请输入一个整数" << endl;
    while (cin >> tmp)
    {
        ivec.push_back(tmp);
        cout << "是否输入下一个数（y/n）" << endl;
        if (cin >> key&&key!='y') { break; }
        cout << "请输入一个整数" << endl;
    }
    cout << "将把vector拷贝给数组对象" << endl;
    //part 2 新建数组并执行拷贝
    int a[ivec.size()] = {0};
    int j = 0;
    for (auto &i : ivec) { a[j] = i;++j; }
    //part 3 输出数组元素
    for (auto &m : a) { cout << m << " "; }
    return 0;
}