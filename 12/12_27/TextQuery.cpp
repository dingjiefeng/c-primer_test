//
// Created by djf on 2016/12/3 0003.
//

#include <sstream>
#include "TextQuery.h"

TextQuery::TextQuery(istream &is):file(new vector<string>)
{
    string text;
    while (getline(is,text))
    {
        file->push_back(text);
        line_no ln = file->size();// 当前行号，从1开始
        istringstream line(text);
        string word;
        while(line>>word)
        {
            auto lines = wm[word];
            if(!lines)//如果第一次遇到，分配一个新的set
                lines.reset(new set<line_no>);
            lines->insert(ln);
        }
    }
}

QueryResult TextQuery::query(const string &sought) const
{
    static shared_ptr<set<line_no>> nodata(new set<line_no>);//如果没有查询到结果，返回一个指向set的函数
    auto loc = wm.find(sought);
    if (loc==wm.end())
        return QueryResult(sought,nodata,file);
    else
        return QueryResult(sought,loc->second,file);

}

