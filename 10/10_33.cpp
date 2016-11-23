#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;
int main(int argc, char *argv[])
{
	if(argc !=4)
	{
		cout << "input error!!!" << endl;
		exit(1);
	}
	ifstream in(argv[1]);
	if(!in)
	{
		cout << "fail to open file!!" << endl;
		exit(1);
	}
	ofstream out1(argv[2]);
	if(!out1)
	{
		cout << "fail to creat output file1!" << endl;
		exit(1);
	} 
	ofstream out2(argv[3]);
	if(!out2)
	{
		cout << "fail to creat output file2!" << endl;
		exit(1);
	} 
	istream_iterator<int> in_iter(in);
	istream_iterator<int> eof;
	ostream_iterator<int> out_iter1(out1, " ");
	ostream_iterator<int> out_iter2(out2, "\n");
	while(in_iter!=eof)
	{
		if(*in_iter & 1)
			*out_iter1++ = *in_iter;
		else
			*out_iter2++ = *in_iter;
		++in_iter;
	}

	return 0;
}
