class ifelsethen{

public:
	ifelsethen() {};
	ifelsethen (int i1, int i2, int i3) : iVall(i1), iVall(i2), iVall(i3){};
	int operator()(int i1, int i2, int i3)
	{
		return i1?i2:i3;
	}
private:
	int iVal1, int iVal2, int iVal3;
};