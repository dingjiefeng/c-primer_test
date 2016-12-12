#include <string>
#include <iostream>


class Employee
{
public:
	Employee() {myid = id++;};
	Employee(const std::string &n) {myid = id++;name = n;};
	int get_id() {return myid;}
	const std::string get_name() {return name;};
private:
	std::string name;
	static int id;
	int myid;
};
int Employee::id = 0;

int main()
{
	Employee myEmployee("jeff");
	std::cout << myEmployee.get_name() << " "
	<< myEmployee.get_id() << std::endl;
	return 0;
}