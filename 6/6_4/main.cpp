/**
 * 6.4��ϰ��
 * ��дһ���������û������������û���������ֵĽ׳�
 * 0�Ľ׳�Ϊ1
 */
#include <iostream>
using namespace std;
void cal(){
    cout << "������һ������" << endl;
    int t = 0;
    int res = 1;
    cin >> t;
    while (t)
    {
        res *= t;
        --t;
    }
    cout << "������Ϊ" << res << endl;
}

int main()
{
    cal();

    return 0;
}