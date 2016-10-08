/**
 * 3.21练习：
 * 1.用迭代器重做3.16
 * 2.原题为：编写一段程序，将3.13中的vector的容量和元素输出出来
 */
#include <iostream>
#include <vector>

using namespace std;

/**
 * 判断是否有元素并依次输出
 * @param v
 * @param id
 */
void outPut(vector<int> v, int id){
    if (v.begin() != v.end())
    {
        cout << "v" << id << "容量为" << v.size() << endl;
        for (auto i = v.begin(); i != v.end(); ++i)
        {
            cout << *i << " ";
        }
        cout << endl;
    } else
    {
        cout << "v" << id << "容量为0" << endl;
    }
}
void outPut(vector<string> v, int id){
    if (v.begin() != v.end())
    {
        cout << "v" << id << "容量为" << v.size() << endl;
        for (auto i = v.begin(); i != v.end(); ++i)
        {
            cout << *i << " ";
        }
        cout << endl;
    } else
    {
        cout << "v" << id << "容量为0" << endl;
    }
}
int main()
{
    //part 1
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10,42);
    vector<int> v4(10);
    vector<int> v5{10,42};
    vector<string> v6{10};
    vector<string> v7{10,"hi"};
    //part 2
    outPut(v1, 1);
    outPut(v2, 2);
    outPut(v3, 3);
    outPut(v4, 4);
    outPut(v5, 5);
    outPut(v6, 6);
    outPut(v7, 7);


    return 0;
}