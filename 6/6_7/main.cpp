/**
 * 6.7��ϰ��
 * ��дһ������
 * ��һ�ε���ʱ����0���Ժ󷵻�ֵÿ�μ�1
 */
#include <iostream>

using namespace std;
int func(){
    static int t = -1;
    ++t;
    return t;
}
/**
 * ���ϵĽⷨ���е����ʣ�Ϊʲôstatic unsigned���治��������
 * ���������ˣ�
 * ���͵�ÿһ�ֶ����޷��ţ�unsigned�����з��ţ�signed���������ͣ���Ĭ����������������ͱ��������з��ŵ����ͣ�
 * ����������޷������͵Ļ�����Ҫ������ǰ����unsigned��ֻ��unsignedʱ����ʾunsigned int;
 * ����ⷨ����һ���ô�������˸�ֵ��
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