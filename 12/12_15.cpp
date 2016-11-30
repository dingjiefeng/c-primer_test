#include <iostream>
#include <memory>

using namespace std;
struct destination {};
struct connection {};

connection connect(destination *p)
{
	cout<<"turn on the connection"<<endl;
	return connection();
}
void disconnect(connection c)
{
	cout<<"turn off the connection"<<endl;
}
void f(destination& d)
{
	connection c = connect(&d);
	shared_ptr<connection> p(&c,
		[](connection *p) {disconnect(*p);});
	cout<<endl;
}
int main()
{
	destination d;
	f(d);
	return 0;
}