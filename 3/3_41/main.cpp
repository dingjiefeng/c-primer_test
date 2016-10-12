/**
 * 3.41练习：
 * 用整型数组初始化一个vector对象
 */
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    //vector<int> ivec;
    int a[5] = {1,2,3,4,5};
    /*for (auto &i : a)
    {
        ivec.push_back(i);
    }*/
    
    vector<int> ivec(begin(a),end(a));
    for (auto &j : ivec)
    {
        cout << j << endl;
    }
    return 0;
}