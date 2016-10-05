#include <iostream>
#include "Sales_data.h"
using namespace std;

int main()
{
    int cnt = 1;
    Sales_data book1,book2;
    cin >> book1.bookNum >> book1.soldNum >> book1.price;
    while (cin >> book2.bookNum >> book2.soldNum >> book2.price)
    {
        if (book1.bookNum == book2.bookNum)
        {
            cnt++;
        } else
        {
            cout << book1.bookNum << "共销售" << cnt << "本，共计" << cnt*book1.price << "元" << endl;
            cnt =  1;
            book1 = book2;
        }
    }
    return 0;
}