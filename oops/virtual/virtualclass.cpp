#include<iostream>

class Base{
public:
	virtual void greet() = 0;
};

class Derived: public Base{
public:
	void greet() {
		std::cout << "Greetings from Derived" << std::endl;
	} 
};

int main() {
	Derived d;
	d.greet();
	return 0;
}
