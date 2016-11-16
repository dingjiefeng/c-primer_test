/*
 *10.1练习：
 ×头文件algorithm中定义了一个名为count的函数，类似find,接受一对迭代器和一个值作为参数
 ×返回给定值在序列中出现的次数，编写程序，将一组int存入vector，打印有多少元素等于给定值
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
	vector<int> ivec = {1,2,3,4,5,1,2,1,2,3,1,2,1};
	int cnt = count(ivec.cbegin(),ivec.cend(),1);
	cout << cnt << endl;	
}
