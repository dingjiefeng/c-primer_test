/**
 * 3.20��ϰ��
 * 1.����һ�������������Ǵ���һ��vector����
 * 2.1 ��ÿ�����ڵ�����֮���������
 * 2.2 �������һ�������һ���ĺͣ�������ڶ����͵����ڶ����ĺ�...�Դ�����
 */
#include <iostream>
#include <vector>

using namespace std;
/**
 * ���2.1���ܣ����vec�����������ĺ�
 * @param vec:����vector
 */
void sum1(vector<int> vec) {
    if (vec.size() == 1)
    {
        cout << "ֻ��һ��������" << endl;
    } else
    {
        for (decltype(vec.size()) i = 0; i < vec.size() - 1; ++i)
        {
            cout << vec[i] + vec[i + 1] << " ";
            if ((i+1) % 5 == 0){cout << endl;}
        }
    }
}
/**
 * ���2.2���ܣ������β֮��
 * @param vec
 */
void sum2(vector<int> vec){
    if (vec.size() == 1)
    {
        cout << "ֻ��һ��������" << endl;
    } else
    {
        for (auto i = 0; i < (vec.size() / 2); ++i)
        {
            cout << vec[i] + vec[vec.size() - 1 - i] << " ";
            if ((i + 1) % 5 == 0)
            {
                cout << endl;
            }
        }
        if (vec.size() % 2 != 0)
        {
            cout << vec[vec.size() / 2] << endl;
        }
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

    //part 2
    //sum1(ivec);
    sum2(ivec);
    return 0;
}