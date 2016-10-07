/**
 * 3.16:
 * 将3.13中的vector对象的容量和具体内容输出出来
 */
#include <iostream>
#include <vector>
using namespace std;
/**
 * 输出vector的容量以及各个元素;
 * 函数重载：int型和string的元素分别运行
 * @param v:int型的vector
 * @param id
 */
void outPut(vector<int> v, int id)
{
    cout<<"v"<<id<<"容量为"<<v.size()<<endl;
    if (v.size()!=0) { for (auto i: v) { cout << i<<" "; } cout << endl; }
}
void outPut(vector<string> v, int id)
{
    cout<<"v"<<id<<"容量为"<<v.size()<<endl;
    if (v.size()!=0) { for (auto i: v) { cout << i<<" "; } cout << endl; }
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
    outPut(v1,1);
    outPut(v2,2);
    outPut(v3,3);
    outPut(v4,4);
    outPut(v5,5);
    outPut(v6,6);
    outPut(v7,7);
    return 0;
}