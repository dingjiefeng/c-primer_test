#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
bool judge(string &s)
{
    return s.size()>=5;
}
int main()
{
    vector<string> svec = {"djf","hello","world","yes","ok"};
    auto newEnd = partition(svec.begin(), svec.end(), judge);
    for (auto a = svec.begin(); a!=newEnd;++a)
    {
        cout << *a << " ";
    }
    cout << endl;
    return 0;
    
}