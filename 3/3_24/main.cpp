/**
 * 3.24��ϰ�����õ���������3.3.3�����һ����ϰ��3.20��
 * 1.����һ�������������Ǵ���һ��vector����
 * 2.�������һ�������һ���ĺͣ�������ڶ����͵����ڶ����ĺ�...�Դ�����
 */
#include <iostream>
#include <vector>

using namespace std;
/**
 * ���õ�����������β���
 * @param v
 */
void sum1(vector<int> v){
    auto beg = v.begin();
    auto end = v.end()-1;
    for (auto i = 0; i < (v.end() - v.begin()) / 2; ++i)
    {
        cout << *(beg + i) + *(end - i) << " ";
    }
    if ((v.end() - v.begin()) % 2 != 0)
    {
        cout << *(beg + (v.end() - v.begin()) / 2) << endl;
    }
}
int main()
{
    vector<int> ivec;
    int sum = 0;
    char key;
    int a;
    //part 1 ����һ������������vector
    cout << "����һ������" << endl;
    while (cin >> a)
    {
        ivec.push_back(a);
        cout << "�Ƿ������y/n)" << endl;
        cin >> key;
        if (key != 'y')
        {
            break;
        }
        cout << "�����������һ������" << endl;
    }

    //part 2 �������
    sum1(ivec);
    return 0;
}