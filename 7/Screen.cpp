//
// Created by djf on 2016/11/2 0002.
//

#include "Screen.h"
Screen & Screen::move(POS r, POS c)
{
    cursor = r*width + c;
    return *this;
}
Screen & Screen::set(POS r, POS c, char ch)
{
    this->move(r,c);
    contents[cursor] = ch;
    return *this;
}
Screen & Screen::set(char ch)
{
    contents[cursor] = ch;
    return *this;
}

inline char Screen::get(POS r, POS c) const
{
    return contents[r*width+c];
}

POS Screen::size() const
{
    return height*width;
}


void Window_mgr::clear(ScreenIndex index)
{
    Screen &s = screens[index];
    s.contents = string(s.height * s.width, ' ');
}
