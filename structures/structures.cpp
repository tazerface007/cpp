#include<iostream>

using std::endl;
using std::cout;

struct Person{
	std::string name;
	short age:8;
};

void printDetails(struct Person& p){
	cout << "Person Name: " << p.name << endl;
	cout << "Person Age: " << p.age << endl;
}

int main() {
	struct Person p;
	p.name = "Deepak";
	p.age = 26;
	cout << "Size of Person:" << sizeof(p) << endl;
	printDetails(p);
	return 0;
}
