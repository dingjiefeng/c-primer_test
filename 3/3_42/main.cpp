/**
 * 3.42��ϰ
 *����������Ԫ�ص�vector���󿽱���һ����������
 */
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    //part 1 ����vector���һ������Ԫ��
    vector<int> ivec;
    int tmp = 0;
    char key;
    cout << "������һ������" << endl;
    while (cin >> tmp)
    {
        ivec.push_back(tmp);
        cout << "�Ƿ�������һ������y/n��" << endl;
        if (cin >> key&&key!='y') { break; }
        cout << "������һ������" << endl;
    }
    cout << "����vector�������������" << endl;
    //part 2 �½����鲢ִ�п���
    int a[ivec.size()] = {0};
    int j = 0;
    for (auto &i : ivec) { a[j] = i;++j; }
    //part 3 �������Ԫ��
    for (auto &m : a) { cout << m << " "; }
    return 0;
}