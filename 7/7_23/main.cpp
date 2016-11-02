/**
 * 7.23练习：
 * 编写一个Screen类
 * 为了方便，后续所有改进Screen类的操作都在这个文件中修改
 */
#include <iostream>
#include "Screen.h"
using namespace std;
int main()
{
    Screen myScreen(5,5,'c');
    myScreen.move(1,0).set('b').display(cout);
    cout << endl;
    myScreen.display(cout);
    cout << endl;
    cout << myScreen.size() << endl;

    return 0;
}