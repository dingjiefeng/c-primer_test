/**
 * 6.7练习：
 * 编写一个函数
 * 第一次调用时返回0，以后返回值每次加1
 */
#include <iostream>

using namespace std;
int func(){
    static int t = -1;
    ++t;
    return t;
}
/**
 * 书上的解法，有点疑问，为什么static unsigned后面不加类型名
 * 后来明白了：
 * 整型的每一种都有无符号（unsigned）和有符号（signed）两种类型，在默认情况下声明的整型变量都是有符号的类型，
 * 如果需声明无符号类型的话就需要在类型前加上unsigned，只有unsigned时，表示unsigned int;
 * 这个解法还有一个好处，规避了负值；
 * @return
 */
unsigned myCnt(){
    static unsigned iCnt = -1;
    ++iCnt;
    return iCnt;
}
int main()
{
    cout << func() << endl;
    cout << func() << endl;
    cout << func() << endl;
    cout << myCnt() << endl;
    cout << myCnt() << endl;
    cout << myCnt() << endl;
    return 0;
}