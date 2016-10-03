#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
    Sales_item book,curbook;
    int cnt = 0;
    cout << "请输入销售纪录：" << endl;
    
    if(cin >> book)
    {
	curbook = book;
	++cnt;
	while(cin >> book)
	{
	    if(book.isbn()==curbook.isbn())
	    {
		++cnt;
	    }
	    else
	    {
		cout << curbook.isbn() << "共有" << cnt << "条销售记录" << endl;
		curbook = book;
		cnt =  1;
	    } 
	}
	
    }
    else
    {
        cerr<<"请输入有效数据！"<<endl;
        return -1;
    }
    return 0;
}
