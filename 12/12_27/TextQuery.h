//
// Created by djf on 2016/12/3 0003.
//

#ifndef INC_12_27_TEXTQUERY_H
#define INC_12_27_TEXTQUERY_H

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <set>
#include <map>
using namespace std;
class QueryResult;//存放查询结果
class TextQuery {
public:
    using line_no = vector<string>::size_type;
    TextQuery(istream &);
    QueryResult query(const string&) const;
private:
    shared_ptr<vector<string>> file;//保存输入文件
    map<string,shared_ptr<set<line_no>>> wm;//保存单词到行号的映射
};

class QueryResult{
    using line_no =vector<string>::size_type;
    friend ostream& print(ostream &, const QueryResult&);
public:
    QueryResult(string s, shared_ptr<set<line_no>> l,shared_ptr<vector<string>> f):
            sought(s), lines(l), file(f) {};

private:
    string sought;//搜索的单词
    shared_ptr<set<line_no>> lines;//出现的行号
    shared_ptr<vector<string>> file;//输入的文件
};

ostream& print(ostream& os, const QueryResult & qr)
{
    os << qr.sought << "occurs" << qr.lines->size() << " "
       << "次" << endl;
    for(auto num : *qr.lines)
        os<<"\t(line "<< num+1 <<")"<<
          *(qr.file->begin()+num)<<endl;
    return os;


}

#endif //INC_12_27_TEXTQUERY_H
