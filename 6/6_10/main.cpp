/**
 * 6.10��ϰ��
 * ����ָ���βν�������������ֵ
 */
#include <iostream>

using namespace std;
void change(int *a, int *b){
    int tmp = *b;
    *b = *a;
    *a = tmp;
}
int main()
{
    int a = 12,b =10;
    cout << a << ' ' << b << endl;
    change(&a,&b);
    cout << a << ' ' << b << endl;
    return 0;
}