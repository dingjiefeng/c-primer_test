/**
 * 5.14练习
 * 从标准输入中读取若干string对象并查找连续重复出现的单词
 * 输出重复的单词以及重复次数
 * 否则输出一条信息表示没有被重复
 *
 * ps:后来发现审题错误，原题要求是连续出现的，难度比目前这个低，干脆将错就错了
 */
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string wordIn;//存放输入的string
    vector<string> wordVec;//存放出现过的单词，每个单词只统计一次
    vector<int> wordCnt;//存放与wordVec对应的每个单词的个数

    cout << "请输入一串单词，以空格隔开：" << endl;
    //cin>>string时，会停在空格处，这个时候应该用getline(cin,string)
    getline(cin,wordIn);
    //为了方便讨论，在结尾再加一个空格，这样每个单词都以空格结尾，for循环中需要
    wordIn += " ";
    /**
    * wordTmp:存放每次读入的单词
    * sameFlag：表示是否与之前的元素相同
    */
    string wordTmp = "";
    bool sameFlag = 0;

    for (int i = 0; i != wordIn.size(); ++i)
    {
        //检测是否为空格，不是空格则为真
        if (isgraph(wordIn[i]))
        {
            wordTmp += wordIn[i];
        } else
        {
            /**
             * 与wordVec中已有的元素进行比较
             * 首先要排除wordVec中没有元素的情况
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
    cout << "单词" << '\t' << "个数" << endl;
    for (int k = 0; k != wordVec.size(); ++k)
    {
        cout << wordVec[k] << '\t' << wordCnt[k] << endl;
    }
    return 0;
}