/**
 * test 4.33
 * 逗号运算符的效果
 */
#include <iostream>

using namespace std;
int main()
{
    int x = 10;
    int y = 20;
    //part 1
    bool someValue = true;
    someValue?++x,++y:--x,--y;
    cout << x << " " << y << " " << someValue << endl;
    //part 2
    someValue = false; x = 10;y = 20;
    someValue?++x,++y:--x,--y;
    cout << x << " " << y << " " << someValue << endl;
    return 0;
}