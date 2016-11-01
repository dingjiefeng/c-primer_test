/**
 * 7.1练习：
 * 使用2.6.1节新定义的Sales_data类为1.6节的交易处理程序编写一个新的版本
 * 因为我是看完全章再返回来做题的，所以我就直接自己定义一个Sales_data类来完成1.6
 * 比较粗糙，后续程序中改进。
 */
#include <iostream>

using namespace std;
typedef string ISBN;
typedef unsigned NUM;
typedef double REVENUE;
/**
 * Sales_data类：
 * 相关函数：
 * isbn()：返回对象的isbn编号； combine():将一个Sales_data加到另一个
 * add():执行两个对象的加法； read():将数据从istream中读到Sales_data中；
 * print():将Sales_data的信息打印到ostream
 * 成员变量：
 * bookno:string类型，表示isbn号； units_sold:unsigned类型，表示销售数量；
 * revenue：double类型，表示总销售收入；
 */
struct Sales_data{
    const ISBN isbn(){ return bookno;}
    Sales_data& combine(const Sales_data &a){
        units_sold += a.units_sold;
        revenue += a.revenue;
        return *this;
    }
    Sales_data add(const Sales_data &a,const Sales_data &b){
        Sales_data sum = a;
        sum.combine(b);
        return sum;
    }

    ISBN bookno;
    NUM units_sold;
    REVENUE revenue;
};
istream &Sales_Read(istream& is,Sales_data &a){
    double price = 0.0;
    is >> a.bookno >> a.units_sold >> price;
    a.revenue = a.units_sold * price;
    return is;
}
ostream &Sales_Print(ostream& os,Sales_data &a){
    os << a.bookno << " " << a.units_sold << " "
       << a.revenue << endl;
    return os;
}

int main()
{
    Sales_data t;
    cout << "请输入交易记录（ISBN、销轴量、单价）" << endl;
    if (Sales_Read(cin, t))
    {
        Sales_data buf;
        while(Sales_Read(cin,buf))
        {
            if (buf.isbn() == t.isbn())
            {
                t.combine(buf);
            } else
            {
                Sales_Print(cout,t);
                t = buf;
            }
        }
    } else
    {
        cerr << "没有输入！" << endl;
        return -1;
    }
    Sales_Print(cout,t);
    return 0;
}