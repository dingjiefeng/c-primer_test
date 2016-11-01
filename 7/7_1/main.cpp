/**
 * 7.1��ϰ��
 * ʹ��2.6.1���¶����Sales_data��Ϊ1.6�ڵĽ��״�������дһ���µİ汾
 * ��Ϊ���ǿ���ȫ���ٷ���������ģ������Ҿ�ֱ���Լ�����һ��Sales_data�������1.6
 * �Ƚϴֲڣ����������иĽ���
 */
#include <iostream>

using namespace std;
typedef string ISBN;
typedef unsigned NUM;
typedef double REVENUE;
/**
 * Sales_data�ࣺ
 * ��غ�����
 * isbn()�����ض����isbn��ţ� combine():��һ��Sales_data�ӵ���һ��
 * add():ִ����������ļӷ��� read():�����ݴ�istream�ж���Sales_data�У�
 * print():��Sales_data����Ϣ��ӡ��ostream
 * ��Ա������
 * bookno:string���ͣ���ʾisbn�ţ� units_sold:unsigned���ͣ���ʾ����������
 * revenue��double���ͣ���ʾ���������룻
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
    cout << "�����뽻�׼�¼��ISBN�������������ۣ�" << endl;
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
        cerr << "û�����룡" << endl;
        return -1;
    }
    Sales_Print(cout,t);
    return 0;
}