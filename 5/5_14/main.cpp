/**
 * 5.14��ϰ
 * �ӱ�׼�����ж�ȡ����string���󲢲��������ظ����ֵĵ���
 * ����ظ��ĵ����Լ��ظ�����
 * �������һ����Ϣ��ʾû�б��ظ�
 *
 * ps:���������������ԭ��Ҫ�����������ֵģ��Ѷȱ�Ŀǰ����ͣ��ɴཫ��ʹ���
 */
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string wordIn;//��������string
    vector<string> wordVec;//��ų��ֹ��ĵ��ʣ�ÿ������ֻͳ��һ��
    vector<int> wordCnt;//�����wordVec��Ӧ��ÿ�����ʵĸ���

    cout << "������һ�����ʣ��Կո������" << endl;
    //cin>>stringʱ����ͣ�ڿո񴦣����ʱ��Ӧ����getline(cin,string)
    getline(cin,wordIn);
    //Ϊ�˷������ۣ��ڽ�β�ټ�һ���ո�����ÿ�����ʶ��Կո��β��forѭ������Ҫ
    wordIn += " ";
    /**
    * wordTmp:���ÿ�ζ���ĵ���
    * sameFlag����ʾ�Ƿ���֮ǰ��Ԫ����ͬ
    */
    string wordTmp = "";
    bool sameFlag = 0;

    for (int i = 0; i != wordIn.size(); ++i)
    {
        //����Ƿ�Ϊ�ո񣬲��ǿո���Ϊ��
        if (isgraph(wordIn[i]))
        {
            wordTmp += wordIn[i];
        } else
        {
            /**
             * ��wordVec�����е�Ԫ�ؽ��бȽ�
             * ����Ҫ�ų�wordVec��û��Ԫ�ص����
             */
            if (!wordVec.empty())
            {
                int num1 = 0, num2 = 0;
                for (auto &j : wordVec)
                {
                    if (j == wordTmp)
                    {
                        sameFlag = 1;
                        num2 = num1;
                    }
                    ++num1;

                }
                if (sameFlag != 1)
                {
                    wordVec.push_back(wordTmp);
                    wordCnt.push_back(1);
                } else
                {
                    ++wordCnt[num2];
                    sameFlag = 0;
                }
            } else
            {
                wordVec.push_back(wordTmp);
                wordCnt.push_back(1);
            }
            wordTmp = "";
        }
    }
    cout << "����" << '\t' << "����" << endl;
    for (int k = 0; k != wordVec.size(); ++k)
    {
        cout << wordVec[k] << '\t' << wordCnt[k] << endl;
    }
    return 0;
}