#include <iostream>
#include <string>

using namespace std;

template <int H, int W>
class Screen
{
public:
	Screen() : contents(H*W,' ') {}
	Screen(char c) : contents(H*W,c) {}
	//friend class window_mgr;
	char get() const
			{ return contents[cursor];}
	inline char get(int,int) const;
	Screen &clear(char = bkground);
public:
	Screen &move(int r, int c);
	Screen &set(char);
	Screen &set(int, int, char);
	Screen &display(ostream &os)
		{ do_display(os); return *this;}
	const Screen &display(ostream &os) const
		{ do_display(os); return *this;}

private:
	static const char bkground = ' ';
	void do_display(ostream &os) const { os << contents;}
	int cursor = 0;
	string contents;
};


template <int H, int W>
Screen<H, W> &Screen<H, W>::clear(char c)
{
	contents = string(H*W, c);
	return *this;
}

template <int H, int W>
Screen<H,W> &Screen<H,W>::move(int r, int c)
{
	cursor = r*W+c;
	return *this;
}

template <int H, int W>
inline Screen<H, W> &Screen<H, W>::set(char c)
{
	contents[cursor] = c;
	return *this;
}

template <int H, int W>
Screen<H, W> &Screen<H, W>::set(int r, int c, char ch)
{
	cursor = r*W+c;
	contents[cursor] = ch;
	return *this;
}

template <int H, int W>
char Screen<H, W>::get(int r, int c) const
{
	return contents[r*W+c];
}

int main()
{
	Screen<5,4> myScreen;
	myScreen.display(cout);
	cout << endl;
	myScreen.move(4,0).set('#').display(cout);
	cout << endl;
	return 0;
}