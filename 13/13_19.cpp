#include <string>
#include <iostream>


class Employee
{
public:
	Employee() {myid = id++;};
	Employee(const std::string &n) {myid = id++;name = n;};
	//assign
	Employee& operator=(Employee &rhs) { name = rhs.name; return *this;};
	//copy
	Employee(Employee &e) { name = e.name; myid=id++;};
	int get_id() {return myid;}
	const std::string get_name() {return name;};
private:
	std::string name;
	static int id;
	int myid;
};
int Employee::id = 0;
void printEmployee(Employee &e)
{
	std::cout << e.get_name() << '\t' << e.get_id() << std::endl;
}
int main()
{
	Employee a("jeff"),b = a, c;
	c = b;
	printEmployee(a); printEmployee(b); printEmployee(c);
	return 0;
}