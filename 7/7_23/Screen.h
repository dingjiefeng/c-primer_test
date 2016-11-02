//
// Created by djf on 2016/11/2 0002.
//

#ifndef SCREEN_H
#define SCREEN_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;
typedef unsigned POS;




class Screen
{

    friend class Window_mgr;
private:
    POS cursor = 0;
    POS height = 0;
    POS width = 0;
    string contents;
public:

    //构造函数
    Screen() = default;
    Screen(const POS &wd, const POS &ht):
            width(wd), height(ht), contents(wd * ht, ' ') {};
    Screen(const POS &wd, const POS &ht, const char &c):
            width(wd), height(ht), contents(wd * ht, c) {};
    //成员函数
    Screen &move(POS r,POS c);
    inline char get(POS r,POS c) const;
    char get() const { return contents[cursor];};
    Screen &set(char ch);
    Screen &set(POS r,POS c, char ch);
    Screen &display(ostream &os) { os << contents; return *this; };
    const Screen &display(ostream &os) const { os << contents; return *this; }
    POS size() const ;

};
class Window_mgr
{
public:
    //size_type:由string类类型和vector类类型定义的类型，
    //用以保存任意string对象或vector对象的长度，标准库类型将size_type定义为unsigned类型。
    typedef vector<Screen>::size_type ScreenIndex;
    void clear(ScreenIndex);
private:
    vector<Screen> screens{Screen(24, 80, ' ')};

};

#endif
